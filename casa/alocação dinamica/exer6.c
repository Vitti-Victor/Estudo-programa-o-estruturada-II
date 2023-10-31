#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int tamanho, inteiro, escolha, posicao;
    int *memoria;
    
    printf("Escreva o tamanho da Memoria em Bytes\nDica:(O tamanho da memoria deve ser multiplo do tamanho de bytes do tipo inteiro): ");
    scanf("%d", &tamanho);

    if(tamanho % sizeof(int) == 0){

    inteiro = tamanho / sizeof(int);

    printf("Inteiro = %d\n", inteiro);

    memoria = (int *) calloc(inteiro, sizeof(int));

    }else{
        printf("O espaço de memoria não da valor inteiro\n");
    }

    if(memoria == NULL){
        printf("ERRO, CORRIJA");
        return 1;
    } 

    printf("\tMemoria de %d bytes alocada com sucesso.\n", tamanho);


    do{
        printf("\n\tMenu de opcoes:\n");
        printf("1. Inserir um valor em uma posicao\n");
        printf("2. Consultar o valor em alguma posicao\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("Escolha a posico de 0 a %d: ", inteiro);
            scanf("%d", &posicao);
            
            if(posicao > inteiro || posicao < 0){
                printf("Essa posicao nao existe");    
            }else{
                printf("Insira um valor para a posicao %d: ", posicao);
                scanf("%d", &memoria[posicao]);         
            }
            break;
        case 2: 
            printf("Escolha a posicao de interesse de 0 a %d: ", inteiro);
            scanf("%d", &posicao);

            if(posicao > inteiro || posicao < 0){
                printf("Essa posicao nao existe");
            }else{
                printf("Na posicao %d contem : %d", posicao, memoria[posicao]);
            }
            break;
        case 0:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção invalida, tente novamente.\n");
            break;
        }

    }while (escolha != 0);

    return 0;
}