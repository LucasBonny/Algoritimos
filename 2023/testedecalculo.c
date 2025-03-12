//calcular quanto tempo a bateria dura baseado nas informaçoes abaixo
/*
06% == 010 min
60% == 100 min
30% == 050 min 

#include <stdio.h>

int main(){
    int porcentagem,tempo, resultado; //porcentagem da bateria/o tempo q a bateria dura baseado na porcentagem
    int horas,minutos,segundo; //conversão do tempo pra horas e minutos
    //se porcentagem for == 1 tempo==6
    printf("Informe a porcentagem da bateria:\n");
    scanf("%d", &porcentagem);

    resultado = 100 - porcentagem;
    printf("Sua bateria ainda durara %d horas e %d minutos.", horas, minutos);
//se a bateria tiver 10% ela vai durar 16 min
}*/
#include <stdio.h>
#include <stdlib.h>
#define porc 96;
//tentativa dia 24/11/2023
int main(){
    //calcular a porcentagem da bateria
    int bat, res;
    system("cls");
    printf("Digite a porcentagem da sua bateria: ");
    scanf("%d", &bat);
    if(bat < 0 || bat > 100) return printf("Valor invalido!");
    res = bat * porc;
    res = res / 60; 
    if(res <= 60){
        printf("Sua bateria vai durara ainda: %d min", res);
    }
    else if(res <= 120){
        res -= 60;
        printf("Sua bateria vai durara ainda: 1 hr e %d min", res);
    }
    else if(res <= 160){
        res -= 120;
        printf("Sua bateria vai durara ainda: 2hrs e %d min", res);
    }
}