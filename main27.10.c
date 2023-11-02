#include <stdio.h>
#include <stdlib.h>
//vetores = array


/*int main(){
    //int valor[5];
    int valor[5] = {7,8,9,7,8};
    double media = 0;
    int i;

    //iterar sobre o vetor
    for(i=0; i<5; i++){
        printf("indice - %d valor - %d.\n", i, valor[i]);
    }

    /*valor[0] = 7;
    valor[1] = 7;
    valor[2] = 7;
    valor[3] = 7;
    valor[4] = 7;
    media = (valor[0] + valor[1] + valor[2] + valor[3] + valor[4]) / 5;
    printf("Media: %.2lf ", media);
    
}
int main(){
    int i;
    int nota[6];
    int media;
    for(i = 0; i < 6; i++){
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &nota[i]);

    }
    media = (nota[1] + nota[2] + nota[3] + nota[4] + nota[5] + nota[0]) / 6;
    printf("A media das notas sao: %d. ", media);
}
Vetores
27/10
1. **Soma de Dois Números:**
Escreva um programa que leia dois números inteiros e
exiba a soma deles.
2. **Média de Notas:**
Crie um programa que leia as notas de um aluno em
várias disciplinas (por exemplo, matemática, ciências,
história) e calcule a média das notas.
3. **Média de Números em um Vetor:**
Crie um programa que calcule a média dos números em um
vetor de inteiros.
4. **Contagem de Elementos Pares:**
Implemente um programa que conte quantos números pares
existem em um vetor de inteiros.
5. **Soma dos Elementos:**
Escreva um programa que calcule a soma de todos os
elementos de um vetor de inteiros.
6. **Produto de Números em um Vetor:**
Implemente um programa que calcule o produto de todos
os números em um vetor de inteiros.

int main(){//1
    
    int valor[2];
    int res;
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor[0]);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor[1]);
    res = valor[0] + valor[1];
    printf("A soma dos dois valores e %d", res);
}
int main(){//2
    
    int valor[4];
    int media;
    printf("Digite a nota de Matematica: ");
    scanf("%d", &valor[0]);
    printf("Digite a nota de Historia: ");
    scanf("%d", &valor[1]);
    printf("Digite a nota de Fisica: ");
    scanf("%d", &valor[2]);
    printf("Digite a nota de Portugues: ");
    scanf("%d", &valor[3]);
    media = (valor[0] + valor[1] + valor[2] + valor[3]) / 4;
    system("cls");
    printf("Matematica: %d pontos.\n", valor[0]);
    printf("Historia: %d pontos.\n", valor[1]);
    printf("Fisica: %d pontos.\n", valor[2]);
    printf("Portugues: %d pontos.\n", valor[3]);
    printf("\nA media das notas e %d.", media);
}
int main(){//3
    int vetor[6] = {4,5,6,7,8,9};
    int media; 
    system("cls");
    media = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4] + vetor[5]) / 6; 
    printf("A media do vetor e: %d.", media);
}
int main(){//4
    int total = 0, i;
    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};
    for(i = 0; i < 10;i++){
        if(vetor[i] % 2 == 0){
            total++;
        }
    } 
    system("cls");
    printf("O vetor tem %d numeros pares.", total);
}*/

