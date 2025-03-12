#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;
    fp = fopen("string.txt", "w");

    if(fp == NULL) {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    fscanf(fp, "id;nome;idade\n");
    fscanf(fp, "Hoje é quinta-feira.\n");
    fscanf(fp, "Hoje é quinta-feira.\n");
    fscanf(fp, "Hoje é quinta-feira.\n");

    fclose(fp);

    return 0;

}