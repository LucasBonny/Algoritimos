#include <stdio.h>
#include <stdlib.h>
#define clear system("cls")
/*Atividade 1
int main(){
    clear;
    int valor[3][3];
    int j, i;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Insira o valor [%d][%d]: ", j+1, i+1);
            scanf("%d", &valor[j][i]);
        }
    }
    printf("-------------\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("| %d ", valor[j][i]);
        }
        printf("|\n");
        printf("-------------\n");
    }
}*/
/*Atividade 2
int main(){
    clear;
    int mat1[2][2], mat2[2][2],res[2][2];
    int i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Insira a matriz 1[%d][%d]: ", j+1, i+1);
            scanf("%d", &mat1[j][i]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Insira a matriz 2[%d][%d]: ", j+1, i+1);
            scanf("%d", &mat2[j][i]);
        }
    }
    printf("\n");
    //laço do calculo
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            res[j][i] = mat1[j][i] + mat2[j][i];
            printf("Soma da matriz [%d][%d] = %d\n",j+1,i+1, res[j][i]);
        }
    }
}*/
int main(){
    int j, x,i,valor[3][3];
    valor[0][0] =1;
    valor[1][0] =2;
    valor[2][0] =3;
    valor[0][1] =4;
    valor[1][1] =5;
    valor[2][1] =6;
    valor[0][2] =7;
    valor[1][2] =8;
    valor[2][2] =9;
    printf("Insira um valor para multiplicar com a matriz: ");
    scanf("%d", &x);
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            valor[j][i] *= x;
            printf("valor[%d][%d] X %d = %d\n", j+1, i+1, x, valor[j][i]);
        }
    }
}