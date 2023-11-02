#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, res = 0;
    int fat;
    system("cls");
    printf("Insira um numero para o fatorial: ");
    scanf("%d", &fat);
    for(i = fat; i >= 1; i--){
        res *= i;
    }
    printf("%d", i);
}