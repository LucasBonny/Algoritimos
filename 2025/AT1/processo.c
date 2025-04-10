#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "processo.h"

Processo* LerArquivo(const char *Diretorio, int N) {
    FILE *fp = fopen(Diretorio, "r");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return NULL;
    }
  
    Processo *P = (Processo *)malloc(N * sizeof(Processo));
    if (P == NULL) {
        printf("Erro ao alocar memória\n");
        fclose(fp);
        return NULL;
    }
  
    char Cabecalho[256];
    fgets(Cabecalho, sizeof(Cabecalho), fp);
  
    char Linha[1024];
    int i = 0;
  
    while (i < N && fgets(Linha, sizeof(Linha), fp)) {
        memset(&P[i], 0, sizeof(Processo));
        P[i].QtdIdAssunto = 0;
  
        char *cursor = Linha;
        int campo_atual = 0;
        int dentro_de_chaves = 0;
        char buffer[256];
        int buffer_idx = 0;
  
        while (*cursor && campo_atual <= 5) {
            if (*cursor == '{') {
                dentro_de_chaves = 1;
                cursor++;
                continue;
            } else if (*cursor == '}') {
                dentro_de_chaves = 0;
                cursor++;
                continue;
            }
  
            if ((*cursor == ',' && !dentro_de_chaves) || *cursor == '\n') {
                buffer[buffer_idx] = '\0';
                
                switch (campo_atual) {
                    case 0: 
                        P[i].Id = atoi(buffer);
                        break;
                    case 1:
                        strncpy(P[i].Numero, buffer, sizeof(P[i].Numero) - 1);
                        break;
                    case 2: 
                        strncpy(P[i].DataAjuizamento, buffer, sizeof(P[i].DataAjuizamento) - 1);
                        break;
                        case 3:
                        {
                            int Idx = 0;
                            char *token = strtok(buffer, ",");
                            while (token && Idx < MAX_IDS) {
                                P[i].IdClasse[Idx++] = atoi(token);
                                token = strtok(NULL, ",");
                            }
                        }
                        break;
                        case 4:
                        {
                            int idx = 0;
                            char *token = strtok(buffer, ",");
                            while (token && idx < MAX_IDS) {
                                P[i].IdAssunto[idx] = atoi(token);
                                idx++;
                                token = strtok(NULL, ",");
                            }
                            P[i].QtdIdAssunto = idx;
                        }
                        break;                      
                    case 5:
                        P[i].AnoEleicao = atoi(buffer);
                        break;
                }
  
                campo_atual++;
                buffer_idx = 0;
                cursor++;
            } else {
                if (*cursor != '"' && *cursor != ' ') {
                    buffer[buffer_idx++] = *cursor;
                }
                cursor++;
            }
        }
        i++;
    }
  
    fclose(fp);
    return P;
  }
  void OrdenarPorId(Processo *Vetor, int N) {
    for (int i = 0; i < N - 1; i++) {
        int Menor = i;
        for (int j = i + 1; j < N; j++) {
            if (Vetor[j].Id < Vetor[Menor].Id) {
                Menor = j;
            }
        }
        if (Menor != i) {
            Processo Temp = Vetor[i];
            Vetor[i] = Vetor[Menor];
            Vetor[Menor] = Temp;
        }
    }
  }
  void OrdenarPorData(Processo Vetor[], int N) {
    for (int i = 0; i < N - 1; i++) {
        int MaisRecente = i;
        for (int j = i + 1; j < N; j++) {
            if (strcmp(Vetor[j].DataAjuizamento, Vetor[MaisRecente].DataAjuizamento) > 0) {
                MaisRecente = j;
            }
        }
        if (MaisRecente != i) {
            Processo Temp = Vetor[i];
            Vetor[i] = Vetor[MaisRecente];
            Vetor[MaisRecente] = Temp;
        }
    }
  }
  int ContarPorIdClasse(Processo Vetor[], int N, int IdClasse) {
    int Contador = 0;
  
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < MAX_IDS; j++) {
            if (Vetor[i].IdClasse[j] == IdClasse) {
                Contador++;
                break;
            }
        }
    }
  
    return Contador;
  }
  int EstaNoVetor(int *Vetor, int Tamanho, int Valor) {
    for (int i = 0; i < Tamanho; i++) {
        if (Vetor[i] == Valor) return 1;
    }
    return 0;
  }
  
  int ContarPorIdAssunto(Processo Vetor[], int N) {
    int Unicos[QNT_LINHAS * MAX_IDS];
    int TotalUnicos = 0;
  
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < MAX_IDS; j++) {
            int Assunto = Vetor[i].IdAssunto[j];
            if (Assunto != 0 && !EstaNoVetor(Unicos, TotalUnicos, Assunto)) {
                Unicos[TotalUnicos] = Assunto;
                TotalUnicos++;
            }
        }
    }
  
    return TotalUnicos;
  }
  
  void ListarMultiplosAssuntos(Processo Vetor[], int N) {
    printf("Processos com mais de um IdAssunto:\n");
  
    for (int i = 0; i < N; i++) {
        int Count = 0;
        for (int j = 0; j < MAX_IDS; j++) {
            if (Vetor[i].IdAssunto[j] != 0) {
                Count++;
            }
        }
  
        if (Count > 1) {
            printf("ID: %d | Numero: %s | Assuntos: ", Vetor[i].Id, Vetor[i].Numero);
            for (int j = 0; j < MAX_IDS; j++) {
                if (Vetor[i].IdAssunto[j] != 0) {
                    printf("%d ", Vetor[i].IdAssunto[j]);
                }
            }
            printf("\n");
        }
    }
  }
  int DiasEmTramitacao(char *DataAjuizamento) {
    struct tm data = {0};
  
    char data_str[11]; 
    strncpy(data_str, DataAjuizamento, 10);
    data_str[10] = '\0';
  
    sscanf(data_str, "%d-%d-%d", &data.tm_year, &data.tm_mon, &data.tm_mday);
    data.tm_year -= 1900;
    data.tm_mon -= 1;
  
    time_t TempoAjuizamento = mktime(&data);
    if (TempoAjuizamento == -1) return -1;
  
    time_t Agora = time(NULL);
  
    double Segundos = difftime(Agora, TempoAjuizamento);
    int Dias = (int)(Segundos / (60 * 60 * 24));
  
    return Dias;
  }
  
  void SalvarEmCsv(const char *NomeArquivo, Processo Vetor[], int N) {
      FILE *fp = fopen(NomeArquivo, "w");
      if (!fp) {
          printf("Erro ao criar o arquivo %s\n", NomeArquivo);
          return;
      }
  
      fprintf(fp, "Id,Numero,DataAjuizamento,IdClasse,IdAssunto,AnoEleicao\n");
  
      for (int i = 0; i < N; i++) {
          fprintf(fp, "%d,%s,%s,", 
              Vetor[i].Id,
              Vetor[i].Numero,
              Vetor[i].DataAjuizamento
          );
  
          fprintf(fp, "{");
          for (int j = 0; j < MAX_IDS; j++) {
              if (Vetor[i].IdClasse[j] == 0) break;
              fprintf(fp, "%d", Vetor[i].IdClasse[j]);
              if (j + 1 < MAX_IDS && Vetor[i].IdClasse[j + 1] != 0) fprintf(fp, ",");
          }
          fprintf(fp, "},");
  
          fprintf(fp, "{");
          for (int j = 0; j < MAX_IDS; j++) {
              if (Vetor[i].IdAssunto[j] == 0) break;
              fprintf(fp, "%d", Vetor[i].IdAssunto[j]);
              if (j + 1 < MAX_IDS && Vetor[i].IdAssunto[j + 1] != 0) fprintf(fp, ",");
          }
          fprintf(fp, "},");
  
          fprintf(fp, "%d\n", Vetor[i].AnoEleicao);
      }
  
      fclose(fp);
      printf("Arquivo %s salvo com sucesso!\n", NomeArquivo);
  }