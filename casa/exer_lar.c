#include<stdio.h>
#include<math.h>

int multMult(){
    int matrizA[4][2], matrizB[2][4], i = 0, j = 0;

    for ( int i = 0; i < 4; i++){
        for( int j = 0; j < 2; j++){
            printf("matrizA[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for ( int i = 0; i < 2; i++){
        for( int j = 0; j < 4; j++){
            printf("matrizB[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("%li\n", sizeof(matrizA));
    printf("%li\n", sizeof(matrizA[i][j]));
    printf("%li\n", sizeof(matrizB));
    printf("%li\n", sizeof(matrizB[i][j]));
    printf("%li\n", sizeof(matrizA[i][j] / matrizB[i][j]));




}

int main(){

multMult();

    return 0;
}