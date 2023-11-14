#include <stdio.h>
#include <stdlib.h>

int main(){
    int saldo = 2000;
    char opc;
    do{
        system("cls");
        printf("Digite uma opcao: ");
        scanf(" %c", &opc);
        if(opc == '1'){
            system("cls");
            printf("Teste 1\n");
            sleep(10);
        }
        else if(opc == '2'){
            system("cls");
            printf("Teste 2\n");
        }
        else{
            printf("Valor invalido!\n");
        }
    }while(opc!='0');
}