#include <stdio.h>
#include <stdlib.h>

int encontrar_posicao(int *vetor, int tamanho, int elemento) {
    for(int i = 0; i < tamanho; i++)
        if(vetor[i] == elemento)
            return i;
    return -1;
}

int main() {
    int numeros[] = {14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
        40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
        30, 41, 15, 27, 33, 18, 26, 39, 12, 21};

    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    
    int elemento = 30;
    int posicao = encontrar_posicao(numeros, tamanho, elemento);
    if(posicao == -1) printf("Nao existe um elemento %d", elemento);
    else printf("O elemento esta na posicao: %d", posicao);
    return 0;
}