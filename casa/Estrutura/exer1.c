#include <stdio.h>
#include <string.h>

struct dados_Salario{
    char nome [50];
    float salario;

};

typedef struct dados_Salario dados_Salario;

int main(){

    float roubo, aux;
    dados_Salario dados;

    printf("Escreva o nome do funcionario:");
    scanf("%[^\n]s\n", &dados.nome);

    printf("Escreva o salário do funcionario : R$");
    scanf("%f", &dados.salario);

    if(dados.salario <= 12.000){
        roubo = (dados.salario * 0.1);
        dados.salario = dados.salario - roubo;
        printf("\tNome do funcionario: %s\n", dados.nome);
        printf("\tSalario do funcionario: R$%.3f", dados.salario);

        }else if (dados.salario > 12.000){
            roubo = (dados.salario * 0.1);
            aux = dados.salario - 12.000;
            aux = aux * 0.25;
            dados.salario = dados.salario - aux - roubo;
            printf("\tNome do funcionario: %s\n", dados.nome);
            printf("\tSalario do funcionario: R$%.3f", dados.salario);


        }

    

    return 0;
}
