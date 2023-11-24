#include <stdio.h>


void function(int vetor[][4], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < 4; j++){
            printf("[%d]", vetor[j][i]);0
        }
        printf("\n");
    }

}
int main(){
    int vetor, y;
    puts("Digite o valor de colunas: ");
    scanf("%d", &y);
    function(vetor, y);
}