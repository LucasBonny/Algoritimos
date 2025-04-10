#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Chave;
} Item;

typedef struct {
    Item *Array;
    int Tamanho;
    int Capacidade;
} Lista;

// Protótipo das funções
Lista* criarLista(int N);
void destruirLista(Lista* L);
void imprimirLista(Lista *L);
void inserirItem(Lista * L, Item I);
void excluirItem(Lista* L, int Posicao);

int main() {
    Lista * L = criarLista(14);
    Item E1 = {17};
    Item E2 = {51};
    Item E3 = {47};
    Item E4; E4.Chave = 53;
    Item E5; E5.Chave = 41;

    inserirItem(L,E1);
    inserirItem(L,E2);
    inserirItem(L,E3);
    inserirItem(L,E4);
    inserirItem(L,E5);

    imprimirLista(L);
    
    excluirItem(L, 3);
    
    imprimirLista(L);

    destruirLista(L);
    return 0;
}

// Implementações

Lista* criarLista(int N) {
    Lista* X = (Lista *) malloc(sizeof(Lista));
    
    if(X == NULL) {
        printf("Erro ao reservar memória para a lista.");
        return NULL;
    }

    X->Array = (Item *) malloc(N * sizeof(Item));
    if(X->Array == NULL) {
        printf("Não foi possivel alocar memória para o vetor de itens");
        free(X);
        return NULL;
    }

    X->Capacidade = N;
    X->Tamanho = 0;

    return X;
}

void destruirLista(Lista* L){
    free(L->Array);
    free(L);
}

void inserirItem(Lista * L, Item I){
    if(L->Tamanho >= L->Capacidade){
        printf("A lista está cheia");
        return;
    }
    L->Array[L->Tamanho] = I;
    L->Tamanho++;
}

void imprimirLista(Lista *L) {
    printf("Lista armazenada no endereco: %p.\n", L);
    printf("Capacidade: %d.\n", L->Capacidade);
    printf("Tamanho: %d.\n", L->Tamanho);

    for(int i = 0; i < L->Tamanho; i++) {
        printf("%d ", L->Array[i].Chave);
    }
}

void excluirItem(Lista* L, int Posicao) {
    if(Posicao < 0 || Posicao >= L->Tamanho) {
        printf("ERRO: Indice fora dos limites da lista!");
    }
    for(int i = Posicao; i < L->Tamanho; i++) L->Array[i] = L->Array[i+1];
    L->Tamanho--;
}