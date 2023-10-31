#include <stdio.h>
#include <string.h>

#define TAM 50

struct pessoas_telefone{
    
    char nome[TAM];
    int ddd;
    int Numero_tel;
};

typedef struct pessoas_telefone telefones;

int main(){

    telefones dados_tell;

    printf("Digite o nome de usuário: ");
    scanf("%50[^\n]s", &dados_tell.nome);
    printf("Digite o DDD: ");
    scanf("%d", &dados_tell.ddd);
    printf("Digite o Numero do celular: ");
    scanf("%d", &dados_tell.Numero_tel);

    printf("\tNome: %s\n", dados_tell.nome);
    printf("\tDDD: %d\n", dados_tell.ddd);
    printf("\tNumero: %d\n", dados_tell.Numero_tel);


    return 0;
}