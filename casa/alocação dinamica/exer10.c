#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho;
    double *vetor;

    printf("Escreva o tamanho do vetor de double: ");
    scanf("%d", &tamanho);

    vetor = (double *) malloc(tamanho *sizeof(double));

    if(vetor == NULL){
        printf("\tErro ao alocaar memoria. Corrija\n");
        return 1;
    }
    printf("\tMemoria aplicada com sucesso\n");

    if(tamanho <= 10 ){
        printf("\tO exercicio pede para que o tamanho seja maior ou igual a 10\n");
        return 2;
    }

    for(int i = 0; i < tamanho; i++){
        vetor[i] = 0;
    }

    for(int i = 0; i < 10; i++){
        vetor[i] = rand() % 100;
    }
    
    printf("\tTodas as posicoes:\n");
    for(int i = 0; i < tamanho; i++){
        printf("\tPosicoes [%d]: %.2lf\n", i, vetor[i]);
    }

    printf("\tTodas as dez primeiras posicoes:\n");
    for(int i = 0; i < 10; i++){
       printf("\tPosicao [%d]: %.2lf\n", i, vetor[i]); 
    }
    
    free(vetor);

    return 0;
}