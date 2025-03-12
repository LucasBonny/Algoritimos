//brincando com o conhecimento da aula
//fflush é apenas para string?
#include <stdio.h>
#include <stdlib.h>

struct Ficha {
    char nome[30];
    char sobrenome[30];
    int cpf;
    int telefone;
};
typedef struct Ficha Ficha;

int main(){
    Ficha ficha1;
    int i;
    for(i = 0; i < 3; i++){
        printf(">>---Ficha %d---<<\n", i +1);
        puts("Insira o nome:");
        fgets(ficha1.nome, sizeof(ficha1.nome), stdin);
        fflush(stdin);

        puts("Insira o sobrenome:");
        scanf("%29[^\n]s", &ficha1.sobrenome);
        fflush(stdin);

        puts("Insira o CPF: Apenas os numeros!");
        scanf("%d", &ficha1.cpf);
        fflush(stdin);
    }

}