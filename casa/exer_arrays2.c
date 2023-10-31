#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main() {

    int arrayOriginal[TAM], arrayInvertido[TAM];

    for (int i = 0; i < TAM; i++) {
        printf("Digite o array[%d] numero: ", i);
        scanf("%d", &arrayOriginal[i]);
    }

    for( int i = 0; i < TAM; i++) {
        printf("%d \n", arrayOriginal[i]);
    }

    for( int i = 0; i < TAM; i++) {
        arrayInvertido[i] = arrayOriginal[TAM - 1 - i];
        printf(" arrayInvertido[%d]: %d \n", i, arrayInvertido[i]);
    }


    return 0;
}