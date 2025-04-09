#ifndef PROCESSO_H
#define PROCESSO_H

#define MAX_IDS 10

typedef struct {
    int Id;
    char Numero[25];
    char DataAjuizamento[25];
    int IdClasse[MAX_IDS];
    int IdAssunto[MAX_IDS];
    int QtdIdAssunto;
    int AnoEleicao;
} Processo;

Processo* LerArquivo(const char *Diretorio, int N);
void ordenar_por_id(Processo vet[], int n);
void ordenar_por_data(Processo vet[], int n);
int contar_por_id_classe(Processo vet[], int n, int id_classe);
int contar_id_assuntos(Processo vet[], int n);
void listar_multiplos_assuntos(Processo vet[], int n);
int dias_em_tramitacao(char *data_ajuizamento);

#endif