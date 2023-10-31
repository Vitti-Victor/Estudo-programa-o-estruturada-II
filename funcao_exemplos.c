#include <stdio.h>

int somar(int *a, int *b){
    return *a + *b;
}

int subtrair(int *a, int *b){
    return *a - *b;
}

int multiplicar(int *a, int *b){
    return *a * *b;
}

int dividir(int *a, int *b){
    if(*b == 0){
        printf("Nao eh possivel dividir por zero!\n");
        return 0;
    }
    return *a / *b;
}

int main(){

    int resultado = 0;
    int num1 = 10;
    int num2 = 0;
                
    resultado = dividir(&num1, &num2);
    printf("%d\n", resultado);
    
    resultado = somar(&num1, &num2);
    printf("%d\n", resultado);

    resultado = subtrair(&num1, &num2);
    printf("%d\n", resultado);

    resultado = multiplicar(&num1, &num2);
    printf("%d\n", resultado);

    return 0;
}