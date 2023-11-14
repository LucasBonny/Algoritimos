#include <stdio.h>

/*

solicite 6 valores 

imprima na tela 

printar na tela os numeros digitados

calcular a soma desses numeros

com o resultado desses numeros e somar todos os numeros pares e todos os numeros impares

imprimir os numeros q sao pares e os numeros que sao impares e seus respectivos indices

string
gets
fgets
puts
scanf aprimorado 
cabeçalho string.h

int main(){
    int i = 0, valor[6] = {7,7,5,2,1,6};
    int res = 0;
    for(i; i < 6; i++){
        res += valor[i];
        printf("%d\n", valor[i]);
    }
    res /= 6;
    printf("A media das notas e %d\n", res);
}

int main(){
    int i = 0;
    int nota[6];
    int res = 0;
    int nPar = 0, nImpar = 0;
    for(i; i <= 5; i++){
        printf("Insira o %do valor: ", i + 1);
        scanf("%d", &nota[i]);
        res += nota[i];
    }
    printf("A soma dos valores inseridos: %d.\n", res);
    printf("A media dos valores inseridos: %d.\n", res /= 6);
    for(i = 1; i <= res; i++){
        if(i % 2 == 0){
            nPar++;
        }else{
            nImpar++;
        }
    }
    printf("A soma dos pares: %d\n", nPar);
    printf("A soma dos impares: %d\n", nImpar);

    for(i = 0; i <= 5; i++){
        if(nota[i] % 2 == 0){
            printf("Numero Par - indice[%d] = %d\n", i, nota[i]);
        }
        else{
            printf("Numero Impar - indice[%d] = %d\n", i, nota[i]);

        }
    }
}
*/
int main(){
    char nome[100];
    fgets(nome, sizeof(nome), stdin);
    fflush(stdin);
    printf(nome);
}