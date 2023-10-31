#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, tamanho = 0, capacida = 1;
    int *vetor;

    while (1){
        printf("Escreva algum valor: ");
        scanf("%d", &valor);

        if(valor < 0){
            break;
        }
        
        if(tamanho >= capacida){
            capacida += 1;
            vetor = (int *) realloc(vetor , capacida * sizeof(int));
    
            if(vetor == NULL){
                printf("Erro ao alocar memoria. CORRIJA");
            }

        }

        vetor[tamanho] = valor;
        tamanho ++;
    }
    printf("\tVetor lido: ");

    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }

    free(vetor);



    return 0;
}
