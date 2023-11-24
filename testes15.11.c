//usar o rand();
#include <stdio.h>

#include <stdlib.h>
#include <time.h>
int main(){  
   srand(time(NULL));  
   int num = 5+rand()% 3;
   printf("%d", num);
}