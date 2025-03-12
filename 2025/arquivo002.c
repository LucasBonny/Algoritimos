#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE * fp;

    fp = fopen("arquivo.txt", "a");

    fprintf(fp ,"Hoje é quinta-feira.\n");

    fclose(fp);

    return 0;

}