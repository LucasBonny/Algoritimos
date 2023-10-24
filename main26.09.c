#include <stdio.h>
//allign-itens
int main(){
    int valor = 10;
    valor++;
    printf("Valor depois do incremento: %d\n", valor);
    valor--;
    printf("Valor depois do incremento: %d\n", valor);
    valor+= 2;
    printf("Valor depois do incremento: %d\n", valor);
    valor-= 2;
    printf("Valor depois do incremento: %d\n", valor);
    valor*= 2;
    printf("Valor depois do incremento: %d\n", valor);
    valor/= 2;
    printf("Valor depois do incremento: %d\n", valor);
}
//ATIVIDADE 1
/*int main(){
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if(valor %2 == 0){
        printf("Par!");
    }else{
        printf("Impar!");
    }
}*/
//ATIVIDADE 2
/*int main(){
    int valor1, valor2, valor3, media;
    printf("Digite a primeira nota: ");
    scanf("%d", &valor1);
    printf("Digite a segunda nota: ");
    scanf("%d", &valor2);
    printf("Digite a terceira nota: ");
    scanf("%d", &valor3);
    media = (valor1 + valor2 + valor3) / 3;
    if(media >= 7){
        printf("Aprovado!\nA media e: %d", media);
    }
    else{
        printf("Reprovado!\nA media e: %d", media);
    }
}*/
//ATIVIDADE 3
/*int main(){
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    if(valor > 0){
        printf("Positivo");
    }
    else if(valor < 0){
        printf("Negativo");
    }
    else if(valor == 0){
        printf("Zero");
    }
}*/
//ATIVIDADE 4
/*int main(){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade >= 0 && idade <= 12){
        printf("Crianca.");
    }
    else if(idade >= 13 && idade <= 19){
        printf("Adolecente.");
    }
    else if(idade >= 20 && idade <= 59){
        printf("Adulto.");
    }
    else if(idade >= 60){
        printf("Idoso.");
    }
}*/
//ATIVIDADE 5
/*int main(){
    int saldo, saque, res;
    saldo = 260;
    printf("Seu saldo e: %d\nDigite o valor que voce deseja sacar: ", saldo);
    scanf("%d", &saque);
    saldo -= saque;
    if(saque > saldo){
        printf("Saldo Invalido!");
    }
    else{
        res = saldo - saque;
        printf("Saque realizado com sucesso!\nSeu saldo atual e: %d", res);
    }

}*/
//DONE!