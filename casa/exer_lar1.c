#include <stdio.h>

int main() {
    int matrizA[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    int matrizB[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int matrizResultado[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    // Verifica se é possível multiplicar as matrizes
    if (sizeof(matrizA[0]) / sizeof(int) != sizeof(matrizB) / sizeof(matrizB[0])) {
        printf("Não é possível multiplicar as matrizes. O número de colunas de A deve ser igual ao número de linhas de B.\n");
        return 1;
    }

    // Multiplicação de matrizes
    int linhasA = sizeof(matrizA) / sizeof(matrizA[0]);
    int colunasA = sizeof(matrizA[0]) / sizeof(int);
    int colunasB = sizeof(matrizB[0]) / sizeof(int);

    printf("%li\n", linhasA);
    printf("%li\n", colunasA);
    printf("%li\n", colunasB);

    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            for (int k = 0; k < colunasA; k++) {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    // Exibe a matriz resultado
    printf("Matriz Resultado:\n");
    for (int i = 0; i < linhasA; i++) {
        for (int j = 0; j < colunasB; j++) {
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
