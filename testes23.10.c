#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    system("cls"); //Limpar o historico do terminal.
    int opc;
    do{
        //menu principal
        printf("[=====MENU=====]\n\n1 - Calculadora\n2 - Calcular a area\n3 - IMC\n0 - Sair\n\nDigite um numero: ");
        scanf("%d", &opc);
        //INICIO DA calculadora
        if(opc == 1){ 
            double valor1, valor2, res;
            char op;
            system("cls"); //Limpar o historico do terminal.
            printf("Formato -> 1 + 1\n\nOperadores Disponiveis: \n'+' - Adicao \n'-' - Subtracao \n'*' - Multiplicacao \n'/' - Divisao \n\nDigite os valores: ");
            scanf("%lf %c %lf", &valor1, &op, &valor2);
            if(op == '+'){
                system("cls");
                res = valor1 + valor2;
                printf("%.0lf %c %.0lf\n\n", valor1, op, valor2);
                printf("Seu resultado e: %.2lf\n\nAguarde 10s e voce voltara ao menu!", res);
                sleep(10);
                system("cls");
                continue;
            }
            else if(op == '-'){
                system("cls");
                res = valor1 - valor2;
                printf("%.0lf %c %.0lf\n\n", valor1, op, valor2);
                printf("Seu resultado e: %.2lf\n\nAguarde 10s e voce voltara ao menu!", res);
                sleep(10);
                system("cls");
                continue;
            }
            else if(op == '*'){
                system("cls");
                res = valor1 * valor2;
                printf("%.0lf %c %.0lf\n\n", valor1, op, valor2);
                printf("Seu resultado e: %.2lf\n\nAguarde 10s e voce voltara ao menu!", res);
                sleep(10);
                system("cls");
                continue;
            }
            else if(op == '/'){
                system("cls");
                res = valor1 / valor2;
                printf("%.0lf %c %.0lf\n\n", valor1, op, valor2);
                printf("Seu resultado e: %.2lf\n\nAguarde 10s e voce voltara ao menu!", res);
                sleep(10);
                system("cls");
                continue;
            }
            else{
                printf("Valores Invalido!\n\nAguarde 5s e voce voltara ao menu!");
                sleep(5);
                system("cls");
                continue;
            }
        }
        //FIM DA calculadora
        //INICIO DE calcular a area
        else if(opc == 2){ 
            system("cls");
            printf("Em desenvolvimento...\n");
            sleep(5);
            system("cls");
            continue;
        }
        //FIM DE calcular a area
        //INICIO DE IMC
        else if(opc == 3){ 
            system("cls");
            printf("Em desenvolvimento...\n");
            sleep(5);
            system("cls");
            continue;
        }
        //FIM DE IMC
        else{
            if(opc == 0){
                continue;
            }
            printf("\nValor invalido! Tente novamente!");
            sleep(5);
            system("cls");
        }
    }
    while(opc != 0);
    printf("Saindo...");
    sleep(5);
    system("cls");
    printf("Codigo encerrado.");
}