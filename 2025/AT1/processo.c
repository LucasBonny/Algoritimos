#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "processo.h"

Processo* LerArquivo(const char *Diretorio, int N) {
    FILE *fp = fopen(Diretorio, "r");

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return NULL;
    }

    Processo *P = (Processo *) malloc(N * sizeof(Processo));
    if (P == NULL) {
        printf("Erro ao alocar memória\n");
        fclose(fp);
        return NULL;
    }

    char Cabecalho[256];
    char Linha[1024];
    int i = 0;

    fgets(Cabecalho, sizeof(Cabecalho), fp);

    while (fgets(Linha, sizeof(Linha), fp) && i < N) {
        char *token;

        // Primeira parte OK
        token = strtok(Linha, ",");
        P[i].Id = atoi(token);

        // Segunda parte OK
        token = strtok(NULL, ",");
        token[strlen(token) - 1] = '\0';
        strcpy(P[i].Numero, token + 1);

        // Terceira parte OK
        token = strtok(NULL, ",");
        strcpy(P[i].DataAjuizamento, token);

        // Quarta parte 
        // Cortando a Linha para verificar se há um ID multivalorado
        char IdClasse[64];
        strcpy(IdClasse, (Linha + 57));
        token = strtok(IdClasse, "}");
        int Verificar = 0;
        for(int j = 0; j < strlen(token); j++) 
            if(IdClasse[j] == '\"') {
                Verificar = 1;
                break;
            }
        if(Verificar == 1) {
            char *Valor;
            P[i].IdClasse[0] = 1; 
            P[i].IdClasse[1] = 2; 
        }
        else{
            strcpy(token, (IdClasse + 1));
            P[i].IdClasse[0] = atoi(token); 
        }

        // Quinta parte 
        // Cortando a Linha para verificar se há um ID multivalorado
        char IdAssunto[64];
        token = strtok(NULL, "}");
        strcpy(IdAssunto, (token + 2));
        P[i].IdAssunto[0] = atoi(IdAssunto); 

        Verificar = 0;
        for(int j = 1; j < strlen(IdAssunto); j++) 
            if(IdClasse[j] == '\"') {
                Verificar = 1;
                break;
            }
        if(Verificar == 1) {
            strcpy(token, (token + 3));
            char* Valor;
            Valor = strtok(token,",");
            P[i].IdAssunto[0] = atoi(Valor);
            Valor = strtok(NULL,",");
            P[i].IdAssunto[1] = atoi(Valor);
            
        }
        else{
            strcpy(token, (token + 2));
            P[i].IdAssunto[0] = atoi(token);
        }

        // token = strtok(NULL, ",");
        // P[i].QtdIdAssunto = atoi(token + 1);

        token = strtok(NULL, ",");
        P[i].AnoEleicao = atoi(token);
        i++;
    }

    fclose(fp);
    return P;
}