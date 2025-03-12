//string.h
//vetores
/*

vetor de char
indice 0 O
1 L 
2 Á
3 !
4 \0 = nulo

em linguagem c o caracter nulo numero é a quebra de linha
para 10 caracteres a 11a posição é o caracter nulo!

scanf
especificador de formato é o %s.
string não precisa do E comercial!

sintaxe geral
scanf("%s", string);
ignora espaçamento
nao limita a entrada do teclado

sintaxe aprimorada
scanf("%<tamanho.-1>[^\n]s", string);
limita os caracteres
não ignora os espaçamentos

biblioteca string.h

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>>

#define limpar system("cls")

int main(){
    limpar;
    char string[10];
    scanf("%9[^\n]s", string);
    fflush(stdin);
    puts(string);
}