#include <stdio.h>

int main(){
    double polegada, centimetro; //variáveis que serão usadas
    printf("Insira o valor em polegada: "); //mostrando mensagem ao usuario
    scanf("%lf", &polegada); //atribuindo o valor inserido na variável
    centimetro = polegada * 2.54; //calculo de conversão
    printf("O valor inserido em centimetro e: %.2lfcm", centimetro); //mostrando o usuario o valor convertido
}