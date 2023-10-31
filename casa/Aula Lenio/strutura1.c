#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct info_pessoa {
    char nome[50];
    char sexo;
    int idade;
} pessoas;

typedef struct info_empresa {
    pessoas info_pess;
    char cargo[50];
    float salario;
} empresa;

void _quant(int *quant) {
    printf("Escolha quantos funcionários deseja adicionar: ");
    scanf("%d", quant);
}

void _malloc(empresa **dados_empresa, int quant) {
    *dados_empresa = (empresa *)malloc(quant * sizeof(empresa));
}

void ver_dados_func(empresa *dados_empresa, int quant) {
    for (int i = 0; i < quant; i++) {
        printf("\tO funcionario %s do sexo %c, tem %d anos, ocupa o cargo de %s e recebe R$%.2f.\n",
               dados_empresa[i].info_pess.nome, dados_empresa[i].info_pess.sexo,
               dados_empresa[i].info_pess.idade, dados_empresa[i].cargo, dados_empresa[i].salario);
    }
}

void recolhe_info(empresa *dados_empresa, int quant) {
    for (int i = 0; i < quant; i++) {
        printf("Digite o nome do funcionário: ");
        scanf(" %49[^\n]", dados_empresa[i].info_pess.nome);

        printf("Digite o sexo (M para masculino e F para feminino): ");
        scanf(" %c", &dados_empresa[i].info_pess.sexo);

        printf("Digite a idade: ");
        scanf("%d", &dados_empresa[i].info_pess.idade);

        printf("Digite o cargo: ");
        scanf(" %49[^\n]", dados_empresa[i].cargo);

        printf("Digite o salario: ");
        scanf("%f", &dados_empresa[i].salario);
    }
}

void _terminal(int *opcao) {
    do {
        printf("1. Ver dados dos funcionários\n");
        printf("2. Armazenar dados de funcionários\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", opcao);

        switch (*opcao) {
            case 1:
                ver_dados_func(dados_empresa, quant);
                break;
            case 2:
                quantidade_alloc(quant, &dados_empresa);
                break;
            default:
                break;
        }
    } while (*opcao != 0);
}

void quantidade_alloc(int quant, empresa **dados_empresa) {
    _quant(&quant);
    _malloc(dados_empresa, quant);

    if (*dados_empresa == NULL) {
        printf("\tErro ao alocar memória. Corrija\n");
        return;
    }
    printf("\tMemoria alocada com sucesso\n");

    recolhe_info(*dados_empresa, quant);
}

int main() {
    empresa *dados_empresa = NULL;
    int quant = 0, opcao;

    _terminal(&opcao);

    // Don't forget to free the allocated memory when you're done.
    free(dados_empresa);

    return 0;
}
