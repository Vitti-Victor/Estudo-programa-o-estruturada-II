#include <stdio.h>
#include <stdlib.h>
/*
int main(){

    int arrayOriginal[10], arrayParInver[10];


    for(int i = 0 ; i < 10 ; i++){
        printf("Digite o array[%d] numero: ", i);
        scanf("%d", &arrayOriginal[i]);
    }

    for(int i = 0 ; i < 10 ; i++){
        if(i % 2 == 0){
            if(i + 1 < 10){
                arrayParInver[i] = arrayOriginal[i + 1];
          
            }else{
                arrayParInver[i] = arrayOriginal[i];
            
            }
        } else {
            arrayParInver[i] = arrayOriginal[i - 1];
        }
    }

    printf("Vetor original:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arrayOriginal[i]);
    }
    printf("\n");

    // Mostra o vetor gerado
    printf("Vetor gerado com posições pares e ímpares trocadas:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arrayParInver[i]);
    }
    printf("\n");



*/
#define TAM 10

int main() {

    int matriz[TAM], matrizParInver[TAM];

    for( int i = 0; i < TAM; i++){
        printf("Digite o array[%d]: ", i);
        scanf("%d", &matriz[i]);
    }

    for( int i = 0; i < TAM; i++){
        if(i % 2 == 0){
            if( i + 1 < TAM){
                matrizParInver[i] = matriz[ i + 1];
            
            }else{
                matrizParInver[i] = matriz[i];

            }
        }else{
            matrizParInver[i] = matriz[ i - 1];
        }
        
    }

    for(int i = 0; i < TAM; i++){
        printf("Matriz trocando as posicoes de par e impar: %d\n", matrizParInver[i]);
    }
    

    return 0;
}
