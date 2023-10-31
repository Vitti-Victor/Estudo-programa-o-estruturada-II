#include <stdio.h>
#include <string.h>

struct numeros{
    int numero1,numero2,numero3;
};

typedef struct numeros numeros;

int main(){

    numeros ordem_crescente;

    printf("Escreva o primeiro valor:");
    scanf("%d", &ordem_crescente.numero1);
    printf("Escreva o segundo valor:");
    scanf("%d", &ordem_crescente.numero2);
    printf("Escreva o terceiro valor:");
    scanf("%d", &ordem_crescente.numero3);

    if(ordem_crescente.numero1 <= ordem_crescente.numero2 && ordem_crescente.numero1 <= ordem_crescente.numero3){
        printf("\tResultado primeiro valor: %d\n", ordem_crescente.numero1);

        if(ordem_crescente.numero2 <= ordem_crescente.numero3){
            printf("\tResultado segundo valor: %d\n", ordem_crescente.numero2);
            printf("\tResultado terceiro valor: %d\n", ordem_crescente.numero3);    

        }else if (ordem_crescente.numero2 >= ordem_crescente.numero3){
            printf("\tResultado terceiro valor: %d\n", ordem_crescente.numero3);    
            printf("\tResultado segundo valor: %d\n", ordem_crescente.numero2);
            
        }
        
    }else if (ordem_crescente.numero2 <= ordem_crescente.numero1 && ordem_crescente.numero2 <= ordem_crescente.numero3){
        printf("\tResultado segundo valor: %d\n", ordem_crescente.numero2);

        if (ordem_crescente.numero1 <= ordem_crescente.numero3){
            printf("\tResultado primeiro valor: %d\n", ordem_crescente.numero1);
            printf("\tResultado terceiro valor: %d\n", ordem_crescente.numero3);
            
        }else if (ordem_crescente.numero1 >= ordem_crescente.numero3){
            printf("\tResultado terceiro valor: %d\n", ordem_crescente.numero3);
            printf("\tResultado primeiro valor: %d\n", ordem_crescente.numero1);

        }

    }else if(ordem_crescente.numero3 <= ordem_crescente.numero1 && ordem_crescente.numero3 <= ordem_crescente.numero2){
        printf("\tResultado terceiro valor: %d\n", ordem_crescente.numero3);

        if (ordem_crescente.numero1 <= ordem_crescente.numero2){
            printf("\tResultado primeiro valor: %d\n", ordem_crescente.numero1);
            printf("\tResultado segundo valor: %d\n", ordem_crescente.numero2);

        }else if(ordem_crescente.numero1 >= ordem_crescente.numero2){
            printf("\tResultado segundo valor: %d\n", ordem_crescente.numero2);
            printf("\tResultado primeiro valor: %d\n", ordem_crescente.numero1);            
        }
        
    }   
        
    
    
    





    return 0;
}