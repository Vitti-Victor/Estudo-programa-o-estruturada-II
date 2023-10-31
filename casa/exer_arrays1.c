#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int valorAleatorio(){

    int aleatorio[50];
    for(int i = 0; i < 50; i++){
        aleatorio[i] = rand() % 70;
    }
}


int main() {

    int filmesRetirados[50], locacaoGratis[50], numClientes = 50;

    for(int i = 0; i < numClientes; i++){
        filmesRetirados[i] = valorAleatorio();
    }

    for(int i = 0; i < numClientes; i++){
        locacaoGratis[i] = filmesRetirados[i] / 10;

    }

    for(int i = 0; i < numClientes; i++){
        printf("O cliente %d tem direito a %d locacoes gratis.\n", i + 1, locacaoGratis[i]);
        printf("O cliente %d retirou %d filmes.\n", i + 1, filmesRetirados[i]);
        printf("Valores aleatorios: %d\n", filmesRetirados[i]);
    }

    return 0;
}