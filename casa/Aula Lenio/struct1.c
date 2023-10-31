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

// Protótipos de funções
void _quant(int *quant);
void alloc(empresa **dados_empresa, int quant);
void recolhe_info(empresa **dados_empresa, int quant);
void ver_dados_func(empresa *dados_empresa, int quant);
void _terminal(int *opcao, int *quant, empresa **dados_empresa);
void armazenar_funcio(int *quant, empresa **dados_empresa);

int main() {
    empresa *dados_empresa = NULL;
    int quant = 0, opcao;

    _terminal(&opcao, &quant, &dados_empresa);

    // Libere a memória alocada quando terminar.
    free(dados_empresa);

    return 0;
}

void _quant(int *quant) {
    printf("Escolha quantos funcionarios deseja adicionar: ");
    scanf("%d", quant);
}

void alloc(empresa **dados_empresa, int quant) {
    *dados_empresa = (empresa *)malloc(quant * sizeof(empresa));
    if (*dados_empresa == NULL) {
        printf("\tErro ao alocar memoria. Corrija\n");
        exit(1); // Encerre o programa em caso de falha na alocacao
    }
    printf("\tMemoria alocada com sucesso\n");
}

void recolhe_info(empresa **dados_empresa, int quant) {
    for (int i = 0; i < quant; i++) {
        printf("Digite o nome do funcionario: ");
        scanf(" %49[^\n]", (*dados_empresa)[i].info_pess.nome);

        printf("Digite o sexo (M para masculino e F para feminino): ");
        scanf(" %c", &(*dados_empresa)[i].info_pess.sexo);

        printf("Digite a idade: ");
        scanf("%d", &(*dados_empresa)[i].info_pess.idade);

        printf("Digite o cargo: ");
        scanf(" %49[^\n]", (*dados_empresa)[i].cargo);

        printf("Digite o salario: ");
        scanf("%f", &(*dados_empresa)[i].salario);
    }
    printf("\tDados dos Funcionarios alocados com sucesso\n");
}

void ver_dados_func(empresa *dados_empresa, int quant) {
    for (int i = 0; i < quant; i++) {
        printf("\tO funcionario %s do sexo %c, tem %d anos, ocupa o cargo de %s e recebe R$%.2f.\n",
               dados_empresa[i].info_pess.nome, dados_empresa[i].info_pess.sexo,
               dados_empresa[i].info_pess.idade, dados_empresa[i].cargo, dados_empresa[i].salario);
    }
}

void _terminal(int *opcao, int *quant, empresa **dados_empresa) {
    do {
        printf("\t1. Ver dados dos funcionarios\n");
        printf("\t2. Armazenar dados de funcionarios\n");
        printf("\t0. Sair\n");
        printf("\tOpcao: ");
        scanf("%d", opcao);

        switch (*opcao) {
            case 1:
                if (*quant > 0 && *dados_empresa != NULL) {
                    ver_dados_func(*dados_empresa, *quant);
                } else {
                    printf("\tNenhum dado de funcionario disponivel.\n");
                }
                break;
            case 2:
                armazenar_funcio(quant, dados_empresa);
                break;
            case 0:
                printf("\tSaindo do programa...\n");
                break;
            default:
                printf("\tOpcao invalida\n");
                break;
        }
    } while (*opcao != 0);
}

void armazenar_funcio(int *quant, empresa **dados_empresa) {
    _quant(quant);
    alloc(dados_empresa, *quant);

    if (*dados_empresa == NULL) {
        printf("\tErro ao alocar memoria. Corrija\n");
    }
    printf("\tMemoria alocada com sucesso\n");

    recolhe_info(dados_empresa, *quant);
}
