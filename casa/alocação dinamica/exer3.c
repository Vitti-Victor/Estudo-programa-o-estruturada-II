#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr, tam, pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    ptr = (int *) malloc(tam *sizeof(int));

    if(ptr == NULL){
        printf("ERRO. CORRIJA");
    }else{
        printf("\tMEMORIA ALOCADA COM SUCESSO\n");

        for(int i = 0; i < tam; i++){
            printf("Escreva o valor da posicao [%d]: ", i);
            scanf("%d", &ptr[i]);
        }

        printf("\n");
        printf("\tValores pares e suas posicoes:\n");

        for(int i = 0; i < tam; i++){
            if(ptr[i] % 2 == 0){
                printf("\tValor da posicao [%d]: %d\n", i, ptr[i]);
                pares ++;
        }
    }

        printf("\n");
        printf("\tValores impares e suas posicoes:\n");
        for(int i = 0; i < tam; i++){
            if(ptr[i] % 2 != 0){
                printf("\tValor da posicao [%d]: %d\n", i, ptr[i]);
                impares ++;
            }
        }

    printf("\n");
    printf("\tQuantidades de valores pares: %d\n", pares);
    printf("\tQuantidaes de valoes impares: %d\n", impares);
    }   

    free(ptr);
    ptr = NULL;


    return 0;
}