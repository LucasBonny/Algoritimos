#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
//
struct Livro {
    char titulo[100];
    char autor[100];
    double review[5];
    int ano;
    double media;
};
typedef struct Livro Livro;

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, j;
    Livro livro[3];
    for(i = 0; i < 3; i++){
        printf("|----Informações do livro %d----|\n", i+1);
        puts("Digite o titulo do livro: ");
        fgets(livro[i].titulo, sizeof(livro[i].titulo), stdin);
        fflush(stdin);
        puts("Digite o nome do autor: ");
        fgets(livro[i].autor, sizeof(livro[i].autor), stdin);
        fflush(stdin);
        puts("Digite o ano de lançamento: ");
        scanf("%d", &livro[i].ano);
        fflush(stdin);
        for(j = 0; j < 5; j++){
            printf("Digite a %da nota: de 0 a 10.\n", j + 1);
            scanf("%lf", &livro[i].review[j]);
            fflush(stdin);
            livro[i].media += livro[i].review[j];
        }
        livro[i].media /= 5;
        livro[i].media /= 2;
        puts("|---------------------|");
        printf("Titulo: %s\n", livro[i].titulo);
        printf("Ano de Publicação: %d\n", livro[i].ano);
        printf("Media das notas do livro %.2lf.\n", livro[i].media);
        puts("|---------------------|\n");
    }
}