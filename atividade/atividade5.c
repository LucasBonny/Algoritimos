#include <stdio.h>

int main(void){
    double dollar, euro; //declarando as variáveis necessárias
    printf("Insira o valor a ser convertido de dolar para euro: "); //mostrando uma mensagem ao usuario
    scanf("%lf", &dollar);//atribuindo o valor a variavel
    euro = dollar * 0.94; //variavel recebendo um valor calculado
    printf("O valor %.2lf$ foi convertido para euro e resultou em: %.2lf euros.", dollar, euro); //mostrando o resultado na tela do usuario
}