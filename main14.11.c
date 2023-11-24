/*structs

nao é variavel 
é membro

dentro de uma structs as variaveis são chamadas de membro.

é declarada fora do main



#include <stdio.h>
#include <stdlib.h>
struct Ponto{
    int x;
    int y;
};
//typedef struct Ponto Ponto; ele renomeia
    
int main(){
    struct Ponto ponto1;
    ponto1.x = 10;
    ponto1.y = 20;

    printf("Cordenada: %d, %d", ponto1.x,ponto1.y);
}
*/
#include <stdio.h>
#include <stdlib.h>
struct Livro{
    char titulo[60];
    char autor[100];
    int anoDePost;
};
typedef struct Livro Livro;
int main(){
    Livro livro1;
    scanf("%99[^\n]s", livro1.autor);
    puts(livro1.autor);
}