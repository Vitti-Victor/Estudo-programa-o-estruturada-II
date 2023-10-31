#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, *numeros;

    printf("Quantidades de numeros: ");
    scanf("%d", &n);

    numeros = malloc(n *sizeof(int));

    for( int i = 0; i < n; i++){
        printf("Numero %d: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("Numeros lidos: ");

    for( int i = 0; i < n; i++){
        printf("%d ", numeros[i]);
    }

    return 0;
}