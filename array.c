#include <stdio.h>
#define N 6
int main(){
    int vetor1[] = {1, 2, 3, 4, 5, 6};
    int vetor2[N];
    //int aux = 0;
    /*for(int i = N - 1; i >= 0; i--){
        vetor2[aux] = vetor1[i];
        aux++;
    }
    for(int i = 0; i < N; i++){
        printf("%d ", vetor2[i]);
    }*/

    int aux = N - 1;
    for(int i = 0; i < N; i++){
       vetor2[i] = vetor1[aux];
         aux--;
    }

    for(int i = 0; i < N; i++){
        printf("%d ", vetor2[i]);
    }
    return 0;
}