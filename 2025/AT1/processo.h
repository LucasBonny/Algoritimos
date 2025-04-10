#ifndef PROCESSO_H
#define PROCESSO_H

#define MAX_IDS 10

#define QNT_LINHAS 18393


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
void OrdenarPorId(Processo *Vetor, int N);
void OrdenarPorData(Processo Vetor[], int N);
int ContarPorIdClasse(Processo Vetor[], int N, int IdClasse);
int EstaNoVetor(int *Vetor, int Tamanho, int Valor);
int ContarPorIdAssunto(Processo Vetor[], int N);
void ListarMultiplosAssuntos(Processo Vetor[], int N);
int DiasEmTramitacao(char *DataAjuizamento);
void SalvarEmCsv(const char *NomeArquivo, Processo Vetor[], int N);

#endif