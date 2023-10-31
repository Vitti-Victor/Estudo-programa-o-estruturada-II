#include <stdio.h>

// função main para imprimir 3 strings
int main() {
    char str1[10];
    char str2[10];
    char str3[10];
    printf("Digite o nome: ");
    fgets(str1, 10, stdin);
    fflush(stdin);
    printf("Digite nome do meio: ");
    fgets(str2, 10, stdin);
    fflush(stdin);
    printf("Digite ultimo nome: ");
    fgets(str3, 10, stdin);
    fflush(stdin);
    printf("\nPrimeiro nome %s\n", str1);
    printf("\nNome do Meio: %s\n", str2);
    printf("\nUltimo nome: %s\n", str3);
    return 0;
}
