// Online C compiler to run C program online
#include <stdio.h>
#include <locale.h>
#include <string.h>

typedef struct Livro Livro;
struct Livro{
    char nomeDoLivro[100];
    char autor[100];
    int anoPublicacao;  
    double review[5];
    double res;
};
int main() {
    setlocale(LC_ALL, "Portuguese");
    Livro livro[3];
    for(int i = 0; i < 3; i++){
        printf("!-=-=-=-=Livro %d=-=-=-=-!\n", i + 1);
        puts("Insira o nome do livro!");
        scanf("%99[^\n]s", livro[i].nomeDoLivro);
        fflush(stdin);
        puts("Digite o nome do autor!");
        scanf("%99[^\n]s", livro[i].autor);
        fflush(stdin);
        puts("Digite o ano de publicação!");
        scanf("%d", &livro[i].anoPublicacao);
        fflush(stdin);
        for(int j = 0; j < 5; j++){
            livro[i].res = 0;
            printf("Digite sua nota de avaliação!\nDe 0 a 10!\n");
            scanf("%lf", &livro[i].review[j]);
            fflush(stdin);
            livro[i].res += livro[i].review[j];
        }
        livro[i].res /= 10;
        livro[i].res /= 2;
    }
    for(int i = 0; i < 3; i++){
        printf("!-=-=-=-=Livro %d=-=-=-=-!\n", i + 1);
        printf("Nome do Livro: %s\n", livro[i].nomeDoLivro);
        printf("Nome do Autor: %s\n", livro[i].autor);
        printf("Ano de Publicação: %d\n", livro[i].anoPublicacao);
        printf("Avaliação: %.2lf\n", livro[i].res);
        printf("-=-=-=-=-=-=--=-=-=-=-=-\n", i + 1);
        
    } 
    puts("Digite enter para fechar...");
    int i;
    scanf("%d", &i);
}