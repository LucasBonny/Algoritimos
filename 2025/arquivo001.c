#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls");
    FILE * fp;

    fp = fopen("arquivo.csv", "w");

    if(fp == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    printf("Arquivo aberto com sucesso.\n");

}