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
            if(valor1 == '+' && valor1 == '-'&& valor1 == '*' && valor1 == '/'){
                printf("Valores Invalido!\n\nAguarde 5s e voce voltara ao menu!");
                sleep(5);
                system("cls");
                continue;
            }
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
            printf("[====A AREA DE UM====]\n\n1 - Circunferencia\n2 - Triangulo\n3 - Quadrado\n0 - Sair\n\nDigite um numero: ");
            scanf("%d", &opc);
            if(opc == 1){
                printf("Teste");
            }
            sleep(5);
            system("cls");
            continue;
        }
        //FIM DE calcular a area
        //INICIO DE IMC
        else if(opc == 3){ 
            system("cls");
            double altura, peso, res;
            printf("Digite seu peso: ");
            scanf("%lf", &peso);
            printf("Digite sua altura: ");
            scanf("%lf", &altura);
            res = peso / (pow(altura,2));
            printf("---------------------\nSeu IMC e: %.2lf\n\n", res);
            if(res < 17){
                printf("Muito abaixo do peso!");
            }
            else if(res >= 17 && res <= 18.49){
                printf("Abaixo do peso!");
            }
            else if(res >= 18.5 && res <= 24.99){
                printf("Peso normal!\nParabens!");
            }
            else if(res >= 25 && res <= 29.99){
                printf("Acima do peso!");
            }
            else if(res >= 30 && res <= 34.99){
                printf("Obesidade I!");
            }
            else if(res >= 35 && res <= 39.99){
                printf("Obesidade II (severa)");
            }
            else if(res >= 40){
                printf("Obesidade III (morbida)");
            }
            printf("\n\nVoltando ao menu principal!");
            sleep(10);
            system("cls");
            continue;
        }
        //FIM DE IMC
        else{//SAIR
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