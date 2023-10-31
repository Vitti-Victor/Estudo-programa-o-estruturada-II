#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * allocastrin(int tam){
    char *ptr;
    ptr = (char *) malloc((tam + 1 ) *sizeof(char));
    return ptr;
}

int main(){

    int tam , ret = 0, j = 0;
    char *nova_string;
    char cop;

    printf("Digite a quantidades de caracteres: ");
    scanf("%d", &tam);

     char *minha_string = allocastrin(tam);

    if(minha_string == NULL){
        printf("ERRO, CORRIJA");
        return 1;
    }else{
        printf("MEMORIA ALOCADA COM SUCESSO\n");
        
        printf("Digite alguma palavra: ");
        scanf("%s", minha_string);
    }

    ret = strlen(minha_string);

    nova_string = (char *) malloc((ret + 1)*sizeof(char));

    for(int i = 0; i < ret; i++){
        cop = minha_string[i];
        if(cop != 'a' && cop != 'e' && cop != 'i' && cop != 'o' && cop != 'u' && cop != 'A' && cop != 'E' && cop != 'I' && cop != 'O' && cop != 'U'){
            nova_string[j++] = cop;
        }
    }

    nova_string[j] = '\0';

    printf("\tPalavra sem vogais: %s", nova_string);


    return 0;
}