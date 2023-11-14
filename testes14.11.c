#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor[3][3], j, i, x,val = 1;
    printf("DIgite um valor para multiplicar com a matriz: ");
    scanf("%d", &x);
    //atribui os valores para a matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            valor[j][i] = val;
            val++;
        }
    }
    //mostra os valores no terminal
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("valor[%d][%d] = %d x %d = %d\n", j, i, valor[j][i], x, x*valor[j][i]);
        }
    }
    
}