#include <stdio.h>
#include <string.h>

int main() {
    char *a = "a";
    char *b = "b";
    
    int resultado = strcmp(a, b);

    if (resultado < 0){
        printf("valor resultado: %d\n", resultado);
        printf("%s vem antes de %s no dicionário\n", a, b);
    }else if (resultado > 0){
        printf("valor resultado: %d\n", resultado);
        printf("%s vem depois de %s no dicionário\n", a, b);
    }else{
        printf("valor resultado: %d\n", resultado);
        printf("%s é igual a %s no dicionário\n", a, b);
    }
    return 0;
}
