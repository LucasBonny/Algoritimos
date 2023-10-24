#include <stdio.h>

int main(){
    int valor[2];
    printf("Digite um valor: ");
    scanf("%d", &valor[0]);
    printf("Digite outro valor: ");
    scanf("%d", &valor[1]);
    printf("A soma dos valores deu %d.", valor[0] + valor[1]);
}