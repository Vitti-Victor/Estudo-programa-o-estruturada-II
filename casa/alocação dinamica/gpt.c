#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = (int *)malloc(5 * sizeof(int)); // Aloca dinamicamente um array de 5 inteiros

    if (numeros == NULL) {
        printf("Erro na alocação de memória.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Peça ao usuário para digitar os 5 números
    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    // Mostra os 5 números
    printf("Os 5 números digitados são: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(numeros);

     for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
