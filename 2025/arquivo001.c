#include <stdio.h>
#include <stdlib.h>

int main() {
   
    FILE * fp;

    fp = fopen("arquivo.txt", "r");

    if(fp == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    printf("Arquivo aberto com sucesso.\n");

}