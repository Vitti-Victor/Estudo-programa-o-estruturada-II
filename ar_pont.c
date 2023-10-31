#include <stdio.h>
#include <locale.h>

int main(){
    // Aritmética de ponteiros
    int vetor[5] = {1,2,3,4,5};
    int *p = vetor;
    p = p + 1; // equivale a p = &a[1]; (desloca 4 bytes para a direita)
    printf("%d\n", *p); // exibe o valor 2
    p = p + 2; // equivale a p andar de a[1] até a[3], ou seja, p = &a[3];
    printf("%d\n", *p); // exibe o valor 4
    p = p - 1; // equivale a p voltar de a[3] até a[2], ou seja, p = &a[2]; (desloca 4 bytes para a esquerda)
    printf("%d\n", *p); // exibe o valor 3
    return 0;
}