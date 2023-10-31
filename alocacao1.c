#include <stdio.h>
#include <stdlib.h>


#define TAMANHO 50
#define QTDE 2


struct Pessoa{
    char nome[TAMANHO];
    int idade;
    float altura;
};

int main(){

    // alocação dinamica de 5 estrutura de pessoas
    // 5 * sizeof(struct Pessoa) = 5 * 56 = 280 bytes
    struct Pessoa *p = (struct Pessoa *) malloc(QTDE * sizeof(struct Pessoa));

    struct Pessoa pessoa;
    
    for(int i = 0; i < QTDE; i++){
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", pessoa.nome);

        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &pessoa.idade);

        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &pessoa.altura);

        p[i] = pessoa;
    }

    for(int i = 0; i < QTDE; i++){
        printf("%s ", p[i].nome);
        printf("%d ", p[i].idade);
        printf("%.2f\n", p[i].altura);
    }

    free(p);
   
    return 0;
}