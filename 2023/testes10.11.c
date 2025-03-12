#include <stdio.h>

int main(){
    int idade;
    char nome[100], var, profissao[30];
    printf("Insira seu nome: ");
    scanf("%99[^\n]s", nome);
    fflush(stdin);
    printf("Insira sua idade: ");
    scanf("%d", &idade);
    printf("Insira sua profissao: ");
    fgets(profissao, sizeof(profissao) ,stdin);
    fflush(stdin);
    printf("Seu nome esta correto?\n");
    gets(nome);
    printf("Insira 'S' ou 'n'\n: ");
    scanf(" %c", &var);
    if(var == 'S' || var == 's'){
        printf("Sua profissao esta correta?\n");
        gets(profissao);
        printf("Insira 'S' ou 'n'\n: ");
        scanf(" %c", &var);
        if(var == 'S' || var == 's'){
            printf("Sua idade esta correta?\n");
            scanf(" %c", &var);
        }
        else{
            printf("Insira sua profissao: ");
            fgets(profissao, sizeof(profissao) ,stdin);
        }
    }
    else{
        do{
        printf("Insira seu nome novamente: ");
        scanf("%99[^\n]s", nome);
        }while(var != 'S' || var != 's');
    }
}