# Select sort

# Insert sort

```C
void Insercao(int *V, int N) {
    int i, j; // Índices
    int Chave;

    for(i = 1; i < N; i++) { // Começa com o segundo elemento
        Chave = V[i]; // O elemento que será inserido na parte ordenada
        j = i - 1; // O índice da parte já ordenada

        // Move os elementos maiores que a Chave para uma posição à frente
        while(j >= 0 && V[j] > Chave) {
            V[j + 1] = V[j]; // Move o elemento para a direita
            j = j - 1; // Move para a posição anterior
        }

        V[j + 1] = Chave; // Insere a Chave na posição correta
    }
}
```
# Quick sort


```txt
_________.________
V[i] <X     V[i] > X
```
```C
void Quicksort(int *V, int inf, int sup);
int Particionar(int *V, int inf, int sup);
void Quicksort(int *V, int inf, int sup){
    if(inf < sup) {
        int P = Particionar(V, inf, sup);
        Quicksort(V, inf, P -1);
        Quicksort(V, P, sup);
    }
}
int Particionar(int *V, int inf, int sup){

}
```


## Pesquisar
1. malloc