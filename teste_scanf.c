#include <stdio.h>
 
int main() {
    char ddd[2];
    char telefone[9];
    char nome[50];
    printf("Digite o nome: ");
    /*
     *  Aqui, [] é o caractere do scanset . ^\n diz para receber a entrada até que a nova linha não seja encontrada. Então, com isso %*c , ele lê o caractere de nova linha e aqui usado * indica que esse caractere de nova linha foi descartado.
    */
    scanf("%5[^\n]%*c", nome);
    printf("%s\n",nome);

    printf("Digite o DDD: ");
    scanf("%[^\n]%*c", ddd);
    printf("%s\n",ddd);

    printf("Digite o numero do telefone: ");
    scanf("%[^\n]%*c", telefone);
    printf("%s",telefone);
    return 0;
}