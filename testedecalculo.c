//calcular quanto tempo a bateria dura baseado nas informaçoes abaixo
/*
06% == 010 min
60% == 100 min
30% == 050 min 
*/
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
}

