#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct info_pessoa{
    char nome[50];
    int idade;
    char sexo;
}pessoa;

typedef struct info_emprego{
    pessoa dados_pessoa;
    float salario;
    char cargo[50];
} emprego;

void preenche_emprego(emprego *dados_emprego){
    printf("Digite o nome do funcionário: ");
    scanf("%s", dados_emprego->dados_pessoa.nome);
    printf("Digite o sexo (M para masculino e F para feminino): ");
    scanf(" %c", &dados_emprego->dados_pessoa.sexo);
    printf("Digite a idade: ");
    scanf("%d", &dados_emprego->dados_pessoa.idade);
    printf("Digite o cargo: ");
    scanf("%s", dados_emprego->cargo);
    printf("Digite o salário: ");
    scanf("%f", &dados_emprego->salario);
}

float calc(emprego pessoa1, emprego pessoa2){
    return pessoa1.salario - pessoa2.salario;
}

void imprime_result(emprego dados_emprego){
    printf("\tO funcionario %s do sexo %c, tem %d anos, possui o cargo de %s e recebe R$%f\n", 
            dados_emprego.dados_pessoa.nome, dados_emprego.dados_pessoa.sexo, dados_emprego.dados_pessoa.idade, dados_emprego.cargo,
            dados_emprego.salario);
}

void imprime_difere_sal(float result_salario, emprego pessoa1, emprego pessoa2){
    printf("\tA diferenca salarial do funcionário %s para o funcionario %s, e de R$%f\n",pessoa1.dados_pessoa.nome, pessoa2.dados_pessoa.nome, result_salario);
}

int main(){
    emprego pessoa1, pessoa2;

    preenche_emprego(&pessoa1);
    preenche_emprego(&pessoa2);


    float result_salario = calc(pessoa1, pessoa2);

    imprime_result(pessoa1);
    imprime_result(pessoa2);


    imprime_difere_sal(result_salario, pessoa1, pessoa2);

    return 0;
}