#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Selecao(int *V, int N);

int main() {
    int i;
    int N = 100000; // number of elements in the array
    int *V = (int *)malloc(N * sizeof(int)); // allocate memory for the array
    double Soma = 0;

    srand(time(NULL)); // seed the random number generator

    // Fill the array with random values between 0 and 999
    for(i = 0; i < N; i++) {
        V[i] = rand() % 1000;
    }

    // Start timing
    clock_t t0 = clock(); 

    // Calculate the sum of the elements in the array
    for(i = 0; i < N; i++) { 
        Soma = Soma + V[i]; 
    }
    
    // Print the array before sorting
    printf("Array before sorting:\n");
    for(i = 0; i < N; i++) {
        printf("%d\t", V[i]);
    }
    printf("\n");

    // Perform selection sort
    Selecao(V, N);

    // End timing
    clock_t tf = clock(); 

    // Print the array after sorting
    printf("\nArray after sorting:\n");
    for(i = 0; i < N; i++) {
        printf("%d\t", V[i]);
    }
    printf("\n");

    // Calculate CPU time used for sorting
    double TempoCPU = ((double)(tf - t0)) / CLOCKS_PER_SEC;
    printf("\nTempo de CPU: %.3f segundos\n", TempoCPU);

    // Free the dynamically allocated memory
    free(V);

    return 0;
}

void Selecao(int *V, int N) {
    int i, j;
    for(i = 0; i < N - 1; i++) {
        int minIndex = i; // position of the minimum element in the unsorted part
        for(j = i + 1; j < N; j++) {
            if(V[j] < V[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = V[minIndex];
        V[minIndex] = V[i];
        V[i] = temp;    
    }
}
