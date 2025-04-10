#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Posicao;
    char Estado[32];
    char Time[32];
    int Pontos;
    int J; // N° de jogos
    int V; // N° de vitórias
    int E; // N° de empates
    int D; // N° de derrotas
    int GP; // Gols marcados
    int GC; // Gols sofridos
    int SD; // Saldo de gols
    float Aproveitamento; // % de pontos conquistados em relação ao total de pontos disputados
} Equipe;
    
Equipe* LerDados(const char *NomeArquivo) {
    FILE *fp = fopen(NomeArquivo,"r");
    fprintf(fp, "%s", fp);
}

int main() {
    return 0;
}