#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int * ptr = NULL, ** ptr2 = NULL;
	int valor = 10;
    

	ptr = &valor;
    ptr2 = &ptr;

    *ptr = 20;



	printf("Endereco de ptr = %x\n", &ptr);

    printf("Endereco de valor usando ptr = %x\n", ptr);

    printf("Endereco de valor = %x\n", &valor);

	printf("Valor ptr = %d\n", *ptr);
    
    printf("Endereco de ptr2 = %d\n", **ptr2);

    printf("valor = %d\n", valor);


	return 0;
}
