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

    qq = &p;
    pp = &q;

    **qq = 35;
    **pp = 20;

    return 0;
}