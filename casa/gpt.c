#include <stdio.h>

#define TAM 5

int main() {
    int vetorOriginal[TAM];
    int vetorGerado[TAM];

    // Leitura dos valores do vetor original
    printf("Digite 20 valores inteiros:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &vetorOriginal[i]);
    }

    // Geração do vetor com posições pares e ímpares trocadas
    for (int i = 0; i < TAM; i++) {
        if (i % 2 == 0) {
            // Posições pares
            if (i + 1 < TAM) {
                vetorGerado[i] = vetorOriginal[i + 1];
            } else {
                vetorGerado[i] = vetorOriginal[i]; // Caso seja a última posição ímpar, mantenha o mesmo valor
            }
        } else {
            // Posições ímpares
            vetorGerado[i] = vetorOriginal[i - 1];
        }
    }

    // Mostra o vetor original
    printf("Vetor original:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetorOriginal[i]);
    }
    printf("\n");

    // Mostra o vetor gerado
    printf("Vetor gerado com posições pares e ímpares trocadas:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetorGerado[i]);
    }
    printf("\n");

    return 0;
}
