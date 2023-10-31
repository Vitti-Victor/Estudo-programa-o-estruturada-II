#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ptr, tam_vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam_vetor);

    ptr = (int *) malloc(tam_vetor *sizeof(int));

    if(ptr == NULL){
        printf("\tERRO. CORRIJA\n");
    }else{
        printf("\tMEMORIA ALOCADA COM SUCESSO\n");

        for(int i = 0; i < tam_vetor; i++){
            printf("Digite o valor da posição [%d]: ", i);
            scanf("%d", &ptr[i]);
        }

        for (int i = 0; i < tam_vetor; i++){
            printf("\tvalor da posição [%d]: %d\n", i, ptr[i]);
        }
        
    }


    return 0;
}