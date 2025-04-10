#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Produto[128];
    int Quantidade;
    double Preco;
} Vendas;

int main() {
    FILE *fp = fopen("arquivo.csv", "r");

    Vendas *venda;

    if(fp == NULL) {
        printf("Erro ao ler o arquivo.");
        return 1;
    }
    char Cabecalho[128];
    fgets(fp, "%s", Cabecalho);
    while(fscanf(fp, "%[^;];%d;%f", venda.Produto, &venda.Quantidade, &venda.Preco)){
        printf("%d", venda.Quantidade);
    }

    fclose(fp);
    return 0;
}