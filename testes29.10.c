#include <stdio.h>
//462
//441
int main(){
    int vetor[6];
    int d = 0, i, media;
    int somaPar = 0,b , somaImp = 0;
    for(i = 0; i < 6; i++){
        printf("insira a nota %d: ", i+1);
        scanf("%i", &vetor[i]);
        d += vetor[i];
    }
    media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4] + vetor[5]) / 6;
    for(b = 0;b <= d; b++){
        if(b % 2 == 0){
            somaPar += b;
        }
        else{
            somaImp += b;
        }
    }
    printf("A media das notas e: %d.\n", media);
    printf("A soma das notas e: %d\n", d);
    printf("A soma dos valores pares sao: %d\n", somaPar);
    printf("A soma dos valores impares sao: %d\n", somaImp);
}