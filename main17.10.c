#include <stdio.h>

/*int main(){
    int i=0;
    do{
        printf("%d\n", i);
        i++;
    }while(i<=10);
    printf("A contagem acabou!");
}*/
/*int main(){
    int valor = 0;
    int valor2 = 0;

    printf("Insira valores para soma e apos inserir, digite 0!\n");
    do{
        scanf("%d", &valor);
        //valor2=valor+valor2;
        valor2 += valor;//incremento generico.
    }while(valor!=0);
    printf("Sua soma dos valores e: %d.", valor2);
    

}*/
int main(){
    int valor;
    printf("Insira um valor para a contagem regressiva: ");
    scanf("%d", &valor);
    do{
        printf("%d\t", valor);
        valor--;
    }while(valor > 0);
}

