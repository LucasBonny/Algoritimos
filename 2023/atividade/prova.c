#include <math.h>
#include <stdio.h>

int main(){
    int valor1, valor2, res;
    char op;
    scanf("%d", &valor1);
    scanf(" %c", &op);
    scanf("%d", &valor2);
    res = valor1 + valor2;
    printf("%d", res);
    return 0;
}