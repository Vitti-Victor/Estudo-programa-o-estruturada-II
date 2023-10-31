#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int a[4] = {1,2,3,4};
    int *p;

    p = a;

    p = p + 1;
    printf("%d\n", *p);
    printf("%d\n", p);

    p = p + 2;
    printf("%d\n", *p);
    printf("%d\n", p);

    p = p - 4;
    printf("%d\n", *p);
    printf("%d\n", p);

    return 0;
}