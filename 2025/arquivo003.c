#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *fp;

    fp = fopen("arquivo.txt", "r");

    int x, y, z;

    fscanf(fp, "%i %i %i", &x, &y, &z);

    printf("%i %i %i", x, y, z);

    fclose(fp);

    return 0;

}