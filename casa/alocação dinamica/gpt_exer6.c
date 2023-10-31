#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho_memoria;

    // Solicita ao usuário o tamanho da memória em bytes
    printf("Digite o tamanho da memória em bytes: ");
    scanf("%d", &tamanho_memoria);

    // Calcula o número de inteiros que podem caber na memória alocada
    int num_inteiros = tamanho_memoria / sizeof(int);

    printf("Numero inteiro: %d\n", num_inteiros);

    // Aloca dinamicamente a memória do tamanho especificado
    int *memoria = (int *)malloc(tamanho_memoria);

    // Verifica se a alocação de memória foi bem-sucedida
    if (memoria == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Inicializa a memória com zeros
    for (int i = 0; i < num_inteiros; i++) {
        memoria[i] = 0;
    }

    printf("Memória de %d bytes alocada com sucesso.\n", tamanho_memoria);

    // Libera a memória alocada dinamicamente
    free(memoria);

    return 0; // Encerra o programa com sucesso
}
