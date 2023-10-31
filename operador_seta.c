#include <stdio.h>

/*
 * Neste exemplo, estamos definindo uma 
 * estrutura chamada Pessoa com membros nome e 
 * idade. Em seguida, criamos uma instância 
 * dessa estrutura chamada pessoa1 e um ponteiro 
 * chamado ptrPessoa. Usamos o operador -> para 
 * acessar os membros da estrutura através do 
 * ponteiro ptrPessoa.
 * 
 * O operador -> em C é usado para acessar 
 * membros de uma estrutura (struct) através de 
 * um ponteiro para ela.
 *
 * O operador -> é uma abreviação para a 
 * expressão (*ponteiro).membro
 * 
 * O resultado de execução deste programa será:
 * Nome: João
 * Idade: 30
 * 
 * Demonstração do uso do operador -> para 
 * acessar membros de uma estrutura através de 
 * um ponteiro em C.
*/

// Definindo uma estrutura chamada 'Pessoa'
struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    // Criando uma instância da estrutura 'Pessoa' e um ponteiro para ela
    struct Pessoa pessoa1;
    struct Pessoa *ptrPessoa;

    // Inicializando a instância da estrutura
    strcpy(pessoa1.nome, "João");
    pessoa1.idade = 30;

    // Atribuindo o endereço da instância da estrutura ao ponteiro
    ptrPessoa = &pessoa1;

    // Usando o operador '->' para acessar os membros da estrutura através do ponteiro
    printf("Nome: %s\n", ptrPessoa->nome);
    printf("Idade: %d\n", ptrPessoa->idade);

    return 0;
}
