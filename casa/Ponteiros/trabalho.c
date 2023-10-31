#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTATOS 100
#define MAX_NOME 100
#define MAX_EMAIL 100
#define MAX_RUA 100
#define MAX_BAIRRO 100
#define MAX_CIDADE 100
#define MAX_DDD 2
#define MAX_NUMERO_TELEFONE 100

// Estrutura para representar o endereço
struct Endereco {
    char rua[MAX_RUA];
    int numero;
    char bairro[MAX_BAIRRO];
    char cidade[MAX_CIDADE];
};

// Estrutura para representar um telefone
struct Telefone {
    char ddd[MAX_DDD];
    char numero[MAX_NUMERO_TELEFONE];
};

// Estrutura para representar um contato
struct Contato {
    char nome[MAX_NOME];
    char email[MAX_EMAIL];
    struct Endereco endereco;
    struct Telefone telefone[2];
};

// Protótipo da função para obter os dados do contato
struct Contato obterDadosContato();

// Protótipo das funções
int encontrarContatoPorNome(struct Contato agenda[], int numContatos, char *nome);
void editarContato(struct Contato agenda[], int numContatos);
void removerContato(struct Contato agenda[], int *numContatos);
void listarContatos(struct Contato agenda[], int numContatos);

// Função para adicionar um contato na agenda
void adicionarContato(struct Contato agenda[], int *numContatos) {
    if (*numContatos < MAX_CONTATOS) {
        // Obtém os dados do contato
        struct Contato novoContato = obterDadosContato();

        // Adiciona o contato à agenda
        agenda[*numContatos] = novoContato;
        (*numContatos)++;

        // Imprime uma mensagem de sucesso
        printf("Contato adicionado com sucesso!\n");
    } else {
        printf("A agenda está cheia. Não é possível adicionar mais contatos.\n");
    }
}

// Função para obter os dados do contato
struct Contato obterDadosContato() {
    struct Contato novoContato;

    // Obtém o nome do contato
    printf("Digite o nome: ");
    scanf("%s", novoContato.nome);

    // Obtém o e-mail do contato
    printf("Digite o email: ");
    scanf("%s", novoContato.email);

    // Obtém o endereço do contato
    printf("Digite a rua: ");
    scanf("%s", novoContato.endereco.rua);
    printf("Digite o número: ");
    scanf("%d", &novoContato.endereco.numero);
    printf("Digite o bairro: ");
    scanf("%s", novoContato.endereco.bairro);
    printf("Digite a cidade: ");
    scanf("%s", novoContato.endereco.cidade);

    // Obtém os telefones do contato
    printf("Digite o DDD do telefone fixo: ");
    scanf("%s", novoContato.telefone[0].ddd);
    printf("Digite o número do telefone fixo: ");
    scanf("%s", novoContato.telefone[0].numero);
    printf("Digite o DDD do celular: ");
    scanf("%s", novoContato.telefone[1].ddd);
    printf("Digite o número do celular: ");
    scanf("%s", novoContato.telefone[1].numero);

    return novoContato;
}


// Função para encontrar um contato pelo nome
int encontrarContatoPorNome(struct Contato agenda[], int numContatos, char *nome) {
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            return i;
        }
    }
    return -1;  
}

// Função para editar um contato
void editarContato(struct Contato agenda[], int numContatos) {
    char nomeEditar[MAX_NOME];
    printf("Digite o nome do contato que deseja editar: ");
    scanf("%s", nomeEditar);
    
    int indicesEncontrados[MAX_CONTATOS];
    int numEncontrados = 0;
    
    // Encontra todos os contatos com o mesmo nome
    for (int i = 0; i < numContatos; i++) {
        if (strcmp(agenda[i].nome, nomeEditar) == 0) {
            indicesEncontrados[numEncontrados] = i;
            numEncontrados++;
        }
    }
    
    if (numEncontrados == 0) {
        printf("Nenhum contato com o nome '%s' encontrado na agenda.\n", nomeEditar);
    } else if (numEncontrados == 1) {
       
        int indice = indicesEncontrados[0];
        printf("Digite o novo nome: ");
        scanf("%s", agenda[indice].nome);
        printf("Digite o novo email: ");
        scanf("%s", agenda[indice].email);
        printf("Digite a nova rua: ");
        scanf("%s", agenda[indice].endereco.rua);
        printf("Digite o novo número: ");
        scanf("%d", &agenda[indice].endereco.numero);
        printf("Digite o novo bairro: ");
        scanf("%s", agenda[indice].endereco.bairro);
        printf("Digite a nova cidade: ");
        scanf("%s", agenda[indice].endereco.cidade);
        printf("Digite o novo DDD do telefone fixo: ");
        scanf("%s", agenda[indice].telefone[0].ddd);
        printf("Digite o novo número do telefone fixo: ");
        scanf("%s", agenda[indice].telefone[0].numero);
        printf("Digite o novo DDD do celular: ");
        scanf("%s", agenda[indice].telefone[1].ddd);
        printf("Digite o novo número do celular: ");
        scanf("%s", agenda[indice].telefone[1].numero);
        printf("Contato editado com sucesso!\n");
    } else {
        // Se houver mais de um contato com o mesmo nome, peça ao usuário para escolher qual editar
        printf("Mais de um contato com o nome '%s' encontrado na agenda. Escolha um pelo ID:\n", nomeEditar);
        for (int i = 0; i < numEncontrados; i++) {
            printf("%d. %s\n", i + 1, agenda[indicesEncontrados[i]].nome);
        }
        int escolha;
        printf("Escolha o ID do contato que deseja editar: ");
        scanf("%d", &escolha);
        escolha--;  
        if (escolha >= 0 && escolha < numEncontrados) {
            int indice = indicesEncontrados[escolha];
            printf("Digite o novo nome: ");
            scanf("%s", agenda[indice].nome);
            printf("Digite o novo email: ");
            scanf("%s", agenda[indice].email);
            printf("Digite a nova rua: ");
            scanf("%s", agenda[indice].endereco.rua);
            printf("Digite o novo número: ");
            scanf("%d", &agenda[indice].endereco.numero);
            printf("Digite o novo bairro: ");
            scanf("%s", agenda[indice].endereco.bairro);
            printf("Digite a nova cidade: ");
            scanf("%s", agenda[indice].endereco.cidade);
            printf("Digite o novo DDD do telefone fixo: ");
            scanf("%s", agenda[indice].telefone[0].ddd);
            printf("Digite o novo número do telefone fixo: ");
            scanf("%s", agenda[indice].telefone[0].numero);
            printf("Digite o novo DDD do celular: ");
            scanf("%s", agenda[indice].telefone[1].ddd);
            printf("Digite o novo número do celular: ");
            scanf("%s", agenda[indice].telefone[1].numero);
            printf("Contato editado com sucesso!\n");
        } else {
            printf("ID nao valido. Nenhum contato foi editado.\n");
        }
    }
}

// Função para remover um contato
void removerContato(struct Contato agenda[], int *numContatos) {
    char nomeRemover[MAX_NOME];
    printf("Digite o nome do contato que deseja remover: ");
    scanf("%s", nomeRemover);
    
    int indiceRemover = encontrarContatoPorNome(agenda, *numContatos, nomeRemover);
    
    if (indiceRemover != -1) {
        // Move os contatos após o removido uma posição para trás
        for (int i = indiceRemover; i < (*numContatos - 1); i++) {
            agenda[i] = agenda[i + 1];
        }
        (*numContatos)--;
        printf("Contato removido com sucesso!\n");
    } else {
        printf("Contato com o nome '%s' não encontrado na agenda.\n", nomeRemover);
    }
}

// Função para listar todos os contatos
void listarContatos(struct Contato agenda[], int numContatos) {
    if (numContatos == 0) {
        printf("A agenda está vazia.\n");
    } else {
        printf("\tLista de contatos:\n");

        // Imprime um cabeçalho
        printf("\tID | Nome | Email | Endereço | Telefones Fixo | Telefone Movel\n");

        // Imprime cada contato
        for (int i = 0; i < numContatos; i++) {
            printf("\t%d | %s | %s | %s | (%s) %s | (%s) %s\n",
                   i + 1,
                   agenda[i].nome,
                   agenda[i].email,
                   agenda[i].endereco.rua,
                   agenda[i].telefone[0].ddd,
                   agenda[i].telefone[0].numero,
                   agenda[i].telefone[1].ddd,
                   agenda[i].telefone[1].numero);
        }
    }
}

int main() {
    struct Contato agenda[MAX_CONTATOS];
    int numContatos = 0;

    // Inicializa a agenda com 5 contatos iniciais
    struct Contato contato1;
    strcpy(contato1.nome, "Freitas");
    strcpy(contato1.email, "gbfreitas586@gmail.com");
    strcpy(contato1.endereco.rua, "Rua Adolfo Fantozzi");
    contato1.endereco.numero = 374;
    strcpy(contato1.endereco.bairro, "Santa Maria");
    strcpy(contato1.endereco.cidade, "Pocos de Caldas");
    strcpy(contato1.telefone[0].ddd, "35");
    strcpy(contato1.telefone[0].numero, "3712-8144");
    strcpy(contato1.telefone[1].ddd, "35");
    strcpy(contato1.telefone[1].numero, "98424-9182");
    
    struct Contato contato2; 
    strcpy(contato2.nome, "victor"); 
    strcpy(contato2.email, "victor.com");
    strcpy(contato2.endereco.rua, "Rua caxambu");
    contato2.endereco.numero = 374;
    strcpy(contato2.endereco.bairro, "Chacara Alvorada");
    strcpy(contato2.endereco.cidade, "Pocos de Caldas");
    strcpy(contato2.telefone[0].ddd, "35");
    strcpy(contato2.telefone[0].numero, "3712-8144");
    strcpy(contato2.telefone[1].ddd, "35");
    strcpy(contato2.telefone[1].numero, "98849-7452");
    
    struct Contato contato3; 
    strcpy(contato3.nome, "ricardo"); 
    strcpy(contato3.email, "ricardo.com");
    strcpy(contato3.endereco.rua, "Rua sao bento");
    contato3.endereco.numero = 374;
    strcpy(contato3.endereco.bairro, "Conjunto");
    strcpy(contato3.endereco.cidade, "Pocos de Caldas");
    strcpy(contato3.telefone[0].ddd, "35");
    strcpy(contato3.telefone[0].numero, "3712-8144");
    strcpy(contato3.telefone[1].ddd, "35");
    strcpy(contato3.telefone[1].numero, "98424-9182");
    
    struct Contato contato4; 
    strcpy(contato4.nome, "if"); 
    strcpy(contato4.email, "if.com");
    strcpy(contato4.endereco.rua, "Rua sao bento");
    contato4.endereco.numero = 374;
    strcpy(contato4.endereco.bairro, "Conjunto");
    strcpy(contato4.endereco.cidade, "Pocos de Caldas");
    strcpy(contato4.telefone[0].ddd, "35");
    strcpy(contato4.telefone[0].numero, "3712-8144");
    strcpy(contato4.telefone[1].ddd, "35");
    strcpy(contato4.telefone[1].numero, "98424-9182");
    
    struct Contato contato5; 
    strcpy(contato5.nome, "prog2"); 
    strcpy(contato5.email, "prog2.com");
    strcpy(contato5.endereco.rua, "Rua sao bento");
    contato5.endereco.numero = 374;
    strcpy(contato5.endereco.bairro, "Conjunto");
    strcpy(contato5.endereco.cidade, "Pocos de Caldas");
    strcpy(contato5.telefone[0].ddd, "35");
    strcpy(contato5.telefone[0].numero, "3712-8144");
    strcpy(contato5.telefone[1].ddd, "35");
    strcpy(contato5.telefone[1].numero, "98424-9182");
    
    

    agenda[numContatos++] = contato1;
    agenda[numContatos++] = contato2; 
    agenda[numContatos++] = contato3; 
    agenda[numContatos++] = contato4;
    agenda[numContatos++] = contato5;

    // Exibe o menu de opções
    int escolha;
    do {
        printf("\nMenu de Opções:\n");
        printf("1. Adicionar um contato\n");
        printf("2. Editar um contato\n");
        printf("3. Remover um contato\n");
        printf("4. Listar todos os contatos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                adicionarContato(agenda, &numContatos);
                break;
            case 2:
                editarContato(agenda, numContatos);
                break;
            case 3:
                removerContato(agenda, &numContatos);
                break;
            case 4:
                listarContatos(agenda, numContatos);
                break;
            case 0:
                printf("Saindo do programa. .\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } while (escolha != 0);

    return 0;
}