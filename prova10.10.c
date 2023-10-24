#include <stdio.h>
#include <math.h>

int main(){
    int i;
    double peso, altura, res;
    double valor1, valor2;
    double raio, area;
    char op;
    printf("!- Menu Principal -!\n\n");
    printf("01 - IMC\n");
    printf("02 - Operacao Aritimetica\n");
    printf("03 - Circunferecia do circulo\n");
    printf("04 - Conversao de C para F\n");
    printf("Selecione: ");
    scanf("%d", &i);

        if(i == 1){
            printf("Digite o seu peso: ");
            scanf("%lf", &peso);
            printf("Digite a sua altura: ");
            scanf("%lf", &altura);
            res = peso / (altura * altura);
            printf("Seu IMC e : %.2lf\n", res);
        }
        else if(i == 2){
            printf("Digite o valor 1: ");
            scanf("%lf", &valor1);
            printf("Digite o operador: ");
            scanf(" %c", &op);
            printf("Digite o valor 2: ");
            scanf("%lf", &valor2);
            if(op == '+'){
                res = valor1 + valor2;
                printf("Seu resultado e: %.2lf", res);
            }
            else if(op == '-'){
                res = valor1 - valor2;
                printf("Seu resultado e: %.2lf", res);
            }
            else if(op == '*'){
                res = valor1 * valor2;
                printf("Seu resultado e: %.2lf", res);
            }
            else if(op == '/'){
                res = valor1 / valor2;
                printf("Seu resultado e: %.2lf", res);
            }
            else return printf("Operador Invalido");
        }
        else if(i == 3){
            printf("Digite o raio do circulo para calcular a area: \n");
            scanf("%lf", &raio);
            area = 3.14 * pow(raio, 2);
            printf("A area do circulo e %.2lf")
            return 0;
        }
}