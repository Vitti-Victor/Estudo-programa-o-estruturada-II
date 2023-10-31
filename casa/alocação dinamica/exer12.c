#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo a estrutura para armazenar informações de um produto
struct Produto {
    int codigo;
    char nome[51]; // 50 caracteres mais o caractere nulo '\0'
    int quantidade;
    float preco;
};

// Função para adicionar um novo produto ao estoque
void adicionarProduto(struct Produto **estoque, int *quantidadeProdutos) {
    printf("Digite as informações do novo produto:\n");
    struct Produto novoProduto;
    printf("Codigo do produto: ");
    scanf("%d", &novoProduto.codigo);
    printf("Nome do produto (max 50 caracteres): ");
    scanf(" %[^\n]", novoProduto.nome);
    printf("Quantidade disponivel no estoque: ");
    scanf("%d", &novoProduto.quantidade);
    printf("Preco de venda: ");
    scanf("%f", &novoProduto.preco);

    (*quantidadeProdutos)++;

    // Aloca espaço para o novo produto no estoque usando realloc
    *estoque = (struct Produto *)realloc(*estoque, (*quantidadeProdutos) * sizeof(struct Produto));

    // Verifica se a alocação foi bem-sucedida
    if (*estoque == NULL) {
        printf("Erro ao alocar memoria para o novo produto.\n");
        exit(1);
    }

    // Copia o novo produto para o final do estoque
    (*estoque)[(*quantidadeProdutos) - 1] = novoProduto;

    printf("Produto adicionado com sucesso!\n");
}

// Função para remover um produto do estoque por código
void removerProduto(struct Produto **estoque, int *quantidadeProdutos) {
    int codigo;
    printf("Digite o codigo do produto a ser removido: ");
    scanf("%d", &codigo);

    int indiceParaRemover = -1;
    for (int i = 0; i < *quantidadeProdutos; i++) {
        if ((*estoque)[i].codigo == codigo) {
            indiceParaRemover = i;
            break;
        }
    }

    if (indiceParaRemover != -1) {
        // Move os elementos restantes para a esquerda para remover o produto
        for (int i = indiceParaRemover; i < (*quantidadeProdutos) - 1; i++) {
            (*estoque)[i] = (*estoque)[i + 1];
        }
        (*quantidadeProdutos)--;

        // Reduz o tamanho do estoque usando realloc
        *estoque = (struct Produto *)realloc(*estoque, (*quantidadeProdutos) * sizeof(struct Produto));

        printf("Produto removido com sucesso!\n");
    } else {
        printf("Produto nao encontrado no estoque.\n");
    }
}

// Função para mostrar a lista de produtos em estoque
void mostrarEstoque(struct Produto *estoque, int quantidadeProdutos) {
    printf("\nLista de produtos em estoque:\n");
    for (int i = 0; i < quantidadeProdutos; i++) {
        printf("Codigo: %d\n", estoque[i].codigo);
        printf("Nome: %s\n", estoque[i].nome);
        printf("Quantidade: %d\n", estoque[i].quantidade);
        printf("Preco: R$%.2f\n\n", estoque[i].preco);
    }
}

int main() {
    struct Produto *estoque = NULL; // Inicialmente, nenhum produto no estoque
    int quantidadeProdutos = 0; // Número atual de produtos no estoque
    int escolha;

    while (1) {
        printf("\nTerminal de Escolhas:\n");
        printf("1. Adicionar Produto\n");
        printf("2. Remover Produto\n");
        printf("3. Ver Produtos em Estoque\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                adicionarProduto(&estoque, &quantidadeProdutos);
                break;
            case 2:
                removerProduto(&estoque, &quantidadeProdutos);
                break;
            case 3:
                mostrarEstoque(estoque, quantidadeProdutos);
                break;
            case 4:
                printf("Saindo do terminal.\n");
                free(estoque); // Libera a memória alocada para o estoque
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}
