#include <stdio.h>

int main(){
    double celsius,fahrenheit; //declarando as variáveis que será usadas
    printf("Digite um graus celsius: "); //mostrando informação ao usuário
    scanf("%lf", &celsius); //recebendo uma informação solicitada e atribuindo a variável
    fahrenheit = celsius * 1.8 + 32; //convertendo celsius para fahrenheit 
    printf("A temperatura em celsius e: %.1lf\nEm fahrenheit e: %.1lf", celsius, fahrenheit); //mostrando ambos os valores
}