#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Livro{
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

int main(){
    struct Livro livro;

    printf("Digite o titulo do livro!\n");
    scanf("%99[^\n]s", livro.titulo);

    printf("Digite o ano de publicação do livro!\n");
    scanf("%d", &livro.anoPublicacao);

    printf("Titulo: %s\n", livro.titulo);
    printf("Ano de Publicação: %d\n", livro.anoPublicacao);
}