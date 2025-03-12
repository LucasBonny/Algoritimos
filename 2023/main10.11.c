#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define clear system

/*int main(){
    //união de uma string com a outra - concatenação
    char string1[10], string2[10];
    printf("Insira seu Nome: ");
    fgets(string1, sizeof(string1), stdin);
    fflush(stdin);
    string1[strlen(string1) - 1] = '\0';//pega o tamanho do array
    printf("Insira seu sobrenome: ");
    fgets(string2, sizeof(string2), stdin);
    strcat(string1, string2);

    puts(string1);
}*/
int main(){
    int mat[3][3];
    int mat2[3][3];
    int coluna, linha;
    
    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;
    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;
    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;
    clear("cls");
    printf("| %d | %d | %d |\n", mat[0][0], mat[0][1], mat[0][2]);
    printf("-------------\n");
    printf("| %d | %d | %d |\n", mat[1][0], mat[1][1], mat[1][2]);
    printf("-------------\n");
    printf("| %d | %d | %d |\n", mat[2][0], mat[2][1], mat[2][2]);

    printf("\n");
    for(coluna = 0; coluna < 3; coluna++){
        for(linha = 0; linha < 3; linha++){
            printf("| %d ", mat2[coluna][linha]);
        }
        printf("|\n");
        if(coluna == 2) break;
        printf("-------------\n");
    }
}