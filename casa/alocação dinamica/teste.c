#include <stdio.h>

int main(){
    
    char x[5] = '\0';

    printf("Digite alguma palavra");
    scanf("%s", &x);

    printf("%s", x);
    
    return 0;
}