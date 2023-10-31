#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct alunos{
    char nome[50], sobrenome[50];
    int ano_naci, numero_matri;

};

int main(){

    int quant;
    struct alunos *matricula;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &quant);

    matricula = (struct alunos *) calloc(quant ,sizeof(struct alunos));

    if(matricula == NULL){
        printf("\tErro ao alocar memoria. Corrija\n");
    }

    printf("\tMemoria alocada com sucesso\n");

    for(int i = 0; i < quant; i++){
        printf("Cadastro do Aluno %d (Primeiro nome):", i + 1);
        scanf("%s", matricula[i].nome);
        printf("Sobrenome: ");
        scanf("%s", matricula[i].sobrenome);
        printf("Matricula: ");
        scanf("%d", &matricula[i].numero_matri);
        printf("Ano de Nascimento: ");
        scanf("%d", &matricula[i].ano_naci);


    }

    for(int i = 0; i < quant; i++){
        printf("\tCadastro do Aluno %d (Primeiro nome): %s\n", i + 1, matricula[i].nome);
        printf("\tSobrenome: %s\n", matricula[i].sobrenome);
        printf("\tMatricula: %d\n", matricula[i].numero_matri);
        printf("\tAno de Nascimento: %d\n", matricula[i].ano_naci);
 
        }

    free(matricula);


    return 0;
}