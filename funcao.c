#include <stdio.h>
// Desconsiderar este exemplo de código!
int vetor3[5];

int* somarValores2VetoresCopia(int vetor1[], int vetor2[]){
    int *pvetor3 = NULL;
    
    for(int i = 0; i < 5; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    pvetor3 = vetor3;

    return pvetor3;
}

int somarValores2VetoresReferencia(){

}

int main(){
    int vetor1[] = {1, 2, 3, 4, 5};
    int vetor2[] = {6, 7, 8, 9, 10};
    int *p = NULL;
    p = somarValores2VetoresCopia(vetor1, vetor2);
    for(int i = 0; i < 5; i++){
        printf("%d ", p[i]);
    }
    return 0;
}