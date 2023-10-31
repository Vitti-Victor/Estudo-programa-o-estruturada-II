#include <stdio.h>

#define N 10

struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
    struct Categoria {
        char nome[50];
        int tipo;
    }categoria;   
};

int main(){
    
    struct Produto produto;
    struct Produto *p = (struct Produto *) malloc(N * sizeof(struct Produto));

    for(int i = 0; i < N; i++){
        printf("Digite o codigo do produto: ");
        scanf("%d", &produto.codigo);

        printf("Digite o nome do produto: ");
        scanf("%d", &produto.nome);

        printf("Digite o preco do produto: ");
        scanf("%d", &produto.preco);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &produto.quantidade);

        printf("Digite o nome da categoria do produto: ");
        scanf("%d", &produto.categoria.nome);

        printf("Digite o tipo da categoria do produto: ");
        scanf("%d", &produto.categoria.tipo);

        p[i] = produto;
    }

    for(int i = 0; i < N; i++){
        printf("%d ", p[i].codigo);
        printf("%s ", p[i].nome);
        printf("%.2f ", p[i].preco);
        printf("%d ", p[i].quantidade);
        printf("%s ", p[i].categoria.nome);
        printf("%d\n", p[i].categoria.tipo);
    }
    
    free(p);

    return 0;
}


