#include <stdio.h>
#include <stdlib.h>
//vetores
/*sintaxe geral
int main(){
    char nome[100];
    printf("Insira seu nome: ");
    scanf("%s", nome);
    printf("%s", nome);
}*/
//sintaxe geral não pode inserir espaços.
//se a declaração for inserida mais do que foi atribuida a variavel char ele irá permitir.
/*sintaxe aprimorada
int main(){
    char nome[10];
    printf("Digite seu nome: ");
    scanf("%9[^\n]s", nome);
    fflush(stdin);//boas praticas -
    printf("%s", nome);
}

    int main(){
        char nome[100];
        printf("Digite seu nome completo: \n");
        //scanf("%99[^\n]s", nome); //pegar uma string reservando o ultimo caracter
        //gets(nome); //pegar uma string
        fgets(nome, sizeof(nome), stdin); //pegar uma string reservando o ultimo caracter
        fflush(stdin); //util para nao dá problema com a proxima declaração de variavel tipo char/float, logo deve ser declarada sempre apos. 
        printf("%s", nome); //saida de função
        puts(nome); //serve para saida de informação tipo string
        
        char nome[100];
        char putss[100] = "Lucas";
        //scanf aprimorado
        printf("Informe seu nome : Scanf Aprimorado\n");
        scanf("%99[^\n]c", nome); //entrada
        fflush(stdin);
        puts(nome); //saida
        printf("\n\n");
        //gets
        printf("Informe seu nome : Gets\n");
        gets(nome);
        fflush(stdin);
        puts(nome);
        //fgets
        printf("Diga seu nome : ffgets\n");
        fgets(nome, sizeof(nome), stdin);
        fflush(stdin);
        printf("%s", nome);
        //puts
        printf("puts: \n");
        puts(putss);
}
int main(){
    char nome[100], email[100], confirm;

    system("cls");
    printf("!----- Pagina de Registro -----!\n\nInforme seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    fflush(stdin);
    printf("\nInforme seu email: ");
    scanf("%99[^\n]s", email);
    printf("\n!-----------------------------!\n\n");
    printf("\n Ola %s, seu email e: %s ?\n Digite S ou N: ", nome, email);
    scanf(" %c", &confirm);
    if(confirm == 'S' || confirm == 's'){
        printf("\nCerto!\n");
    }
    else{
        printf("Acesso Negado!");
    }
}
*/
//string.h
/**/