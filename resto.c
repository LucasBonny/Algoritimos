#include <stdio.h>

int main(){
    int valor[2];
    printf("Valor1: \n");
    scanf("%d", &valor[0]);
    printf("Valor 2: \n");
    scanf("%d", &valor[1]);
    printf("o resto e %d", valor[0] % valor[1]);
    return 0;
}