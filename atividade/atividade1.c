#include <stdio.h>

int main(){
    int valor1,valor2, res; // aqui está sendo declarado as variáveis inteira que será usada!
    char op; // aqui está sendo declarado a variável char que será usada para o operador!
    printf("Digite um valor:\n"); //mostrar uma mensagem ao usuário pedindo uma informação! 
    scanf("%d", &valor1); //recebendo a informação e armazenando na variável!
    printf("Digite um operador valido: + - * /\n"); //mostrar uma mensagem ao usuário pedindo uma informação! 
    scanf(" %c", &op); //recebendo a informação e armazenando na variável!
    printf("Digite o segundo valor:\n"); //mostrar uma mensagem ao usuário pedindo uma informação! 
    scanf("%d", &valor2); //recebendo a informação e armazenando na variável!
    if(op == '+'){ //fazendo uma condição perguntando se a informação do operador é igual a +!
        res = valor1 + valor2; //fazendo o cálculo e atribuindo o resultado a outra variável.
        printf("O seu resultado e: %d\n", res); //mostrando o resultado do cálculo ao usuário.
    }
    else if(op == '-'){ //se a acima não passar essa condição pergunta se a informação do operador é igual a -!
        res = valor1 - valor2; //fazendo o cálculo e atribuindo o resultado a outra variável.
        printf("O seu resultado e: %d\n", res); //mostrando o resultado do cálculo ao usuário.
    }
    else if(op == '*'){ //se a acima não passar essa condição pergunta se a informação do operador é igual a *!
        res = valor1 * valor2; //fazendo o cálculo e atribuindo o resultado a outra variável.
        printf("O seu resultado e: %d\n", res); //mostrando o resultado do cálculo ao usuário.
    }
    else  if(op == '/'){ //se a acima não passar essa condição pergunta se a informação do operador é igual a /!
        res = valor1 / valor2; //fazendo o cálculo e atribuindo o resultado a outra variável.
        printf("O seu resultado e: %d\n", res); //mostrando o resultado do cálculo ao usuário.
    }
    else return printf("Operador Invalido!"); //se nenhuma das verificações acima forem válidas, o terminal dará uma mensagem de erro!
}