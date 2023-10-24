#include <stdio.h>

int main(){
    double nota1,nota2,nota3, media; //declarando as variáveis que serão usadas
    printf("Digite a nota 1: ");  //mostrando mensagem ao usuario
    scanf("%lf", &nota1); //atribuindo inserção do usuario a variável
    printf("Digite a nota 2: "); //mostrando mensagem ao usuario
    scanf("%lf", &nota2); //atribuindo inserção do usuario a variável
    printf("Digite a nota 3: "); //mostrando mensagem ao usuario
    scanf("%lf", &nota3); //atribuindo inserção do usuario a variável
    media = (nota1 + nota2 + nota3) / 3; //somando as notas e calculando a média
    printf("A media das notas e: %.1lf", media); //mostrando o resultado de média ao usuario
}