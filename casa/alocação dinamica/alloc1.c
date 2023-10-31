#include <stdio.h>
#include <stdlib.h>

int main(){

    float *ptr;
    int n;

    printf("Escreva a quantidade de numeros: ");
    scanf("%d", &n);

    printf("Quantidades de posicoes: %d\n", n);

    ptr = (float *) malloc(n *sizeof(float));

    

    if(ptr == NULL){
        printf("Deu ERRO");
    
    }else{
        printf("\tMemoria alocada com sucesso\n");

        for(int i = 0; i < n; i++){
            printf("Escreva o valor da posicao %d: ", i);
            scanf("%f", &ptr[i]);
        }

        for(int i = 0; i < n; i++){
            printf("\tValor da posicao %d: %f\n", i, ptr[i]);
        }
    }

    printf("Endereço de memoria sem for: %d\n", &ptr);

    for(int i = 0; i < n; i++){
        printf("Endereço de memoria da posição %d: %d\n", i,(void *) &ptr[i]);
    }

    free(ptr);
    ptr = NULL;
    
    return 0;
}