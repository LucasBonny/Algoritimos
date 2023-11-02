#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//se a nota for <=4
// menor que 7< tem direito a recuperaçao
//6 notas


//pesquisar oq são vetores
int main(){ //feita dia 27/10
    char r1,r2,r3,r4,r5;
    int certo = 0, errado = 0, media;
    //Questão 1
    system("cls");
    setlocale(LC_ALL, "Portuguese_Brasil");
    printf("\nQuestao 1: Qual e a sintaxe correta para declarar uma variavel inteira em C?\n");
    printf("a) int x; \n");
    printf("b) var x; \n");
    printf("c) integer x; \n");
    printf("d) numero x; \n");
    printf("\nInsira sua resposta: ");
    scanf(" %c", &r1);
    if(r1 == 'a'){
        certo++;
    }else{
        errado++;
    }
    //Questão 2
    system("cls");
    printf("\nQuestao 2: Qual e a funcao usada para imprimir no console em C?\n");
    printf("a) print (); \n");
    printf("b) console.log(); \n");
    printf("c) printtext(); \n");
    printf("d) printf(); \n");
    printf("\nInsira sua resposta: ");
    scanf(" %c", &r2);
    if(r2 == 'd'){
        certo++;
    }else{
        errado++;
    }
    //Questão 3
    system("cls");
    printf("\nQuestao 3: O que o operador '==' faz em c?\n");
    printf("a) Atribui um valor a uma variavel.\n");
    printf("b) Compara dois valores.\n");
    printf("c) Divide dois valores.\n");
    printf("d) Multiplica dois valores.\n");
    printf("\nInsira sua resposta: ");
    scanf(" %c", &r3);
    if(r3 == 'b'){
        certo++;
    }else{
        errado++;
    }
    //Questão 4
    system("cls");
    printf("\nQuestao 4: Qual e o operador logico para 'OU' em C?\n");
    printf("a) &&\n");
    printf("b) ||\n");
    printf("c) !\n");
    printf("d) <>\n");
    printf("\nInsira sua resposta: ");
    scanf(" %c", &r4);
    if(r4 == 'b'){
        certo++;
    }else{
        errado++;
    }
    //Questão 5
    system("cls");
    setlocale(LC_ALL, "Portuguese_Brasil");
    printf("\nQuestao 5: QUal e a estrutura de controle usada para repeticao em C?\n");
    printf("a) if\n");
    printf("b) switch\n");
    printf("c) for\n");
    printf("d) else\n");
    printf("\nInsira sua resposta: ");
    scanf(" %c", &r5);
    system("cls");
    if(r5 == 'c'){
        certo++;
    }else{
        errado++;
    }
    media = (10 / 5) * certo;
    printf("Certas: %d.\nErradas: %d.\n\nMedia: %d.", certo, errado, media);
    if(media <= 4){
        printf("\nReprovado!");
    }
    else if(media < 7){
        printf("\nRecuperacao!");
    }
    else{
        printf("\nAprovado!");
    }
}
