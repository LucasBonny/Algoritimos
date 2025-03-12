#include <stdio.h>
#include <math.h>

//ATIVIDADE 1
/*int main(){
    int valor1,valor2, res;
    char operador;
    do{
        printf("\nDigite a operacao: ");
        scanf("%d %c %d", &valor1, &operador, &valor2);
        if(operador == '+'){
            res = valor1 + valor2;
            printf("O seu resultado e: %d", res);
        }
        else if(operador == '-'){
            res = valor1 - valor2;
            printf("O seu resultado e: %d", res);
        }
        else if(operador == '*'){
            res = valor1 * valor2;
            printf("O seu resultado e: %d", res);
        }
        else if(operador == '/'){
            res = valor1 / valor2;
            printf("O seu resultado e: %d", res);
        }
        else if(operador == '%'){
            res = valor1 % valor2;
            printf("O seu resto e: %d", res);
        }
    }while(operador != '+' || operador != '-' || operador != '*' || operador != '/');
    return 0;
}
*/

//IMC

int main (){
    double peso, altura, res;
    printf("Digite o seu peso: ");
    scanf("%lf", &peso);
    printf("Digite o seu altura: ");
    scanf("%lf", &altura);
    res = peso / pow(altura, 2);
    printf("Seu IMC e: %.2lf\n", res);
    if(res <= 18.5){
        printf("Magreza");
    }
    if(res > 18.5 && res <= 24.9){
        printf("Normal");
    }
    if(res > 24.9 && res <= 29.9){
        printf("Obesidade 1");
    }
    if(res > 29.9 && res <= 34.9){
        printf("Obesidade 2");
    }
    if(res > 34.9 && res <= 39.9){
        printf("Obesidade 3");
    }
}