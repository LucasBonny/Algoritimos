#include <stdio.h>

int main(){
    int valor1;
    char operador;
    int valor2;
    int resultado;
    printf("Digite o valor 1: \n");
    scanf("%d", &valor1);
    printf("Digite seu operador: \n");
    scanf(" %c", &operador);
    printf("Digite o valor2: \n");
    scanf("%d", &valor2);
    if(operador == '+'){
        resultado = valor1 + valor2;
        printf("Seu resultado e: %d", resultado);
    }
    else if(operador == '-'){
        resultado = valor1 - valor2;
        printf("Seu resultado e: %d", resultado);
    }
    else if(operador == '*'){
        resultado = valor1 * valor2;
        printf("Seu resultado e: %d", resultado);
    }
    else if(operador == '/'){
        resultado = valor1 / valor2;
        printf("Seu resultado e: %d", resultado);
    }
}