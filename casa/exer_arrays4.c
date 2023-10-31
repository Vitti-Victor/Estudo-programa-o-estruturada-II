#include <stdio.h>
#include <stdlib.h>

#define QANT 2
#define LIN 4
#define COL 4

int main() {

    int matriz[QANT][LIN][COL];

    for(int k = 1; k <= QANT; k++){
        printf("De valores para a matriz %d\n ", k);
        for(int i = 0; i < LIN; i++){
            for(int j = 0; j < COL; j++){
                printf("Valor da posicao matriz[%d][%d]: ", i, j);
                scanf("%d", &matriz[k][i][j]);
            }
        }
        printf("\n");
    }

    for(int k = 1; k <= QANT; k++){
        printf("Resultado valores da matriz %d\n ", k);
        for(int i = 0; i < LIN; i++){
            for(int j = 0; j < COL; j++){
                printf("Valor da posicao matriz[%d][%d]: %d\n ", i, j, matriz[k][i][j]);
            }
        }
        printf("\n");
    }



    return 0;
}