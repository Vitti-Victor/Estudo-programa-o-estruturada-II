#include <stdio.h>

#define TAMANHO 50
#define QTDE 5

struct Pessoa{
    char nome[TAMANHO];
    int idade;
    float altura;
};

int main(){

    // alocação dinamica de 5 estrutura de pessoas
    // 5 * sizeof(struct Pessoa) = 5 * 56 = 280 bytes
    struct Pessoa *p = (struct Pessoa *) malloc(QTDE * sizeof(struct Pessoa));

    for(int i = 0; i < QTDE; i++){
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", *p[i].nome);

        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &p[i].idade);

        printf("Digite a altura da pessoa %d: ", i+1);
        scanf("%f", &p[i].altura);
    }

    for(int i = 0; i < QTDE; i++){
        printf("Nome: %s\n", p[i].nome);
        printf("Idade: %d\n", p[i].idade);
        printf("Altura: %.2f\n", p[i].altura);
    }
   
    return 0;
}