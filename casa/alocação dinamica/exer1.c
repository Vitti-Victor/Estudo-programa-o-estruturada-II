#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int *ptr, num;

    setlocale(LC_ALL, "Portuguese_Brasil");

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &num);

    ptr = (int *) malloc(num *sizeof(int));

    if(ptr == NULL){
        printf("ERRO, CORRIJA");
    }else{
        printf("\tMEMORIA ALOCADA COM SUCESSO\n");

        for(int i = 1; i <= num; i++){
            printf("Digite o valor de (%d): ", i);
            scanf("%d", &ptr[i]);
        }

        for(int i = 1; i <= num; i++){
            printf("\tValor da posição (%d): %d\n", i, ptr[i]);
        }
        
    }

    free(ptr);
    ptr = NULL;

    return 0;
}