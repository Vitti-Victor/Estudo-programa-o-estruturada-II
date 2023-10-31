#include <stdio.h>
#include <stdlib.h>


int main(){

    int valor, inicia;
    int *vetor_Dados;

    printf("Digite a quantidades de posicoes: ");
    scanf("%d", &valor);

    vetor_Dados = (int *) calloc(valor, sizeof(int));

    if(vetor_Dados == NULL){
        printf("\tMemoria nao alocada. Corrija\n");
        return 1;
    }else{
        printf("\tMemoria alocada com sucesso\n");
    
        if(valor == 1500){
            printf("\tNumero de posicoes: %d\n", valor);
        
            for(int i = 0; i < valor; i++){
                if(vetor_Dados[i] == 0){
                    inicia++;
                }
            }
            printf("\tTodas as %d posicoes contem o valor de 0\n", valor);

            for(int i = 0; i < valor; i++){
                vetor_Dados[i] = i; 
            }

            printf("\tOs 10 primeiros elementos do vetor:\n");
            for (int i = 0; i < 10; i++) {
                printf("\t%d ", vetor_Dados[i]);
            }
            printf("\n");

            printf("\tOs 10 ultimos elementos do vetor:\n");
            for (int i = valor - 10; i < valor; i++) {
                printf("\t%d", vetor_Dados[i]);
            }
            printf("\n");

        }else{
            printf("\tErro, o exercicio pede para conter 1500 posicoes\n");
        }
    }

    free(vetor_Dados);
    vetor_Dados == NULL;

    return 0;
}