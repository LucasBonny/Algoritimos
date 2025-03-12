#include <stdio.h>
#include <stdlib.h>
#define teste system("cls");

int main(){
    teste;
    char nome[50];
    int salario, vendas, boni;

    printf("Insira o nome do funcionario: ");
    scanf("%s", &nome);
    printf("Digite o salario: ");
    scanf("%d", &salario);
    printf("Insira as vendas no mes: ");
    scanf("%d", &vendas);
    if(vendas >= 7){
        boni = salario / 100 * 15;
        printf("%s voce bateu a meta, foi somado '15 por cento' ao seu salario!\nSeu salario: %d\n Sua Bonificacao: %d.\nSeu salario total: %d.", nome,salario, boni, salario + boni);
    }
    else{
        printf("Seu salario: %d\nNao houve bonificacao em seu salario!", salario);
    }
}