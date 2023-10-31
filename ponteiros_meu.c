#include <stdio.h>

/*
 * Acesso a elementos de arrays de forma eficiênte
 * Passagem por referência
 * Alocação dinâmica de memória
 * Estrutura de dados
*/

int main(){

    int *p = NULL;
    int *q = NULL;
    int **pp = NULL;
    int **qq = NULL;

    int num1 = 10;
    int num2 = 7;

    p = &num1;
    q = &num2;

    pp = &p;
    qq = &q;


    printf(" ponteiro de ponteiro qq: %d\n", **pp); //Valor do ponteiro de ponteiro
    printf(" ponteiro de pronteiro pp: %d\n", **qq); //Valor do ponteiro de ponteiro
 
    printf(" ponteiro de ponteiro pp com &: %d\n", &pp); //Endereço de memoria onde foi armazenado o ponteiro de ponteiro
    printf(" ponteiro de ponteiro qq com &: %d\n", &qq); //Endereço de memoria onde foi armazenado o ponteiro de ponteiro

    printf(" ponteiro de ponteiro pp sem **: %d\n", pp); //Endereço de onde foi armazenado o ponteiro
    printf(" ponteiro de ponteiro qq sem **: %d\n", qq); //Endereço de onde foi armazenado o ponteiro

    printf(" ponteiro de ponteiro pp com um *: %d\n", *pp); //Endereço de onde foi armazenado a variável num1
    printf(" ponteiro de ponteiro qq com um *: %d\n", *qq); //Endereço de onde foi armazenado a variável num2
    
    printf(" ponteiro p: %d\n", *p); //Valor da variavel apontada pelo ponteiro
    printf(" ponteiro q: %d\n", *q); //Valor da variavel apontada pelo ponteiro

    printf(" ponteiro p sem *: %d\n", p); //Endereço de onde foi armazenado a variável num1
    printf(" ponteiro q sem *: %d\n", q); //Endereço de onde foi armazenado a variável num2

    printf(" ponteiro p com &: %d\n", &p); //Endereço de onde foi armazenado o ponteiro
    printf(" ponteiro q com &: %d\n", &q); //Endereço de onde foi armazenado o ponteiro
    
    printf(" num1: %d\n", &num1); //Endereço de onde foi armazenado a variável num1
    printf(" num2: %d\n", &num2); //Endereço de onde foi armazenado a variável num2
    
    printf(" num1: %d\n", num1); //Valor da variável num1   
    printf(" num2: %d\n", num2); //Valor da variável num2
    
    return 0;
}