#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ID;
    char Nome[124];
    int Idade;
} Usuario;

int main() {
    FILE* fp = fopen("arquivo.csv","r");

    if(fp == NULL) {
        printf("Erro ao ler o arquivo");
        exit(1);
    }

    Usuario A[3];
    int i = 0;

    char Linha[1024];
    int Media = 0;

    fgets(Linha, sizeof(Linha), fp);

    while(fgets(Linha, sizeof(Linha), fp)) {
        sscanf(Linha, "%d;%[^;];%d", &A[i].ID, A[i].Nome, &A[i].Idade);
        printf("ID: %d | Nome: %s | Idade: %d\n", A[i].ID, A[i].Nome, A[i].Idade);
        Media+=A[i].Idade;
        i++;
    }

    Media /= i;
    printf("A media da idade deles sao: %d",Media);

    fclose(fp);
}