#include <stdio.h>
#include <string.h>

struct dia_mes_ano{
    char nome[50];
    int dia;
    int mes;
    int ano;
};

typedef struct dia_mes_ano dia_mes_ano;

int main(){

    int dia_atual, mes_atual, ano_atual;
    int result_dia, result_mes, result_ano;
    dia_mes_ano calc_idade;

    printf("Digite o nome: ");
    scanf("%[^\n]s", &calc_idade.nome);
        
    printf("Digite o dia de nascimento: ");
    scanf("%d",&calc_idade.dia);

    printf("Digite o mes de nascimento: ");
    scanf("%d",&calc_idade.mes);

    printf("Digite o ano de nascimento: ");
    scanf("%d",&calc_idade.ano);

    printf("Digite o dia atual: ");
    scanf("%d", &dia_atual);

    printf("Digite o mes atual: ");
    scanf("%d", &mes_atual);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    result_dia = dia_atual - calc_idade.dia;
    result_mes = mes_atual - calc_idade.mes;
    result_ano = ano_atual - calc_idade.ano;

    if(result_mes < 0 ){
        result_ano = result_ano - 1;
        result_mes = 12 - (result_mes * -1 ) ;
    }


    if(result_dia >=1 && result_dia <= 31){
        if(result_mes >= 1 && result_mes <= 12){
            if(result_ano > 0 && result_ano <= 80){
                if(result_ano > 15 && result_ano < 18){
                    printf("\n\tInfo: %s\n \t%d/%d/%d", calc_idade.nome, result_dia, result_mes, result_ano );
                    printf("\tPode votar, mas nao pode dirigir");

                }else if (result_ano > 17){
                    printf("\n\tInfo: %s\n \t%d/%d/%d", calc_idade.nome, result_dia, result_mes, result_ano );
                    printf("\tPode votar e dirigir");
                }
                
            }else{
                printf("\n\tInfo: %s\n \t%d/%d/%d", calc_idade.nome, result_dia, result_mes, result_ano );
                printf("\tNao pode votar e nem dirigir.");
            }
        }  
    }else if(calc_idade.dia < 0 || calc_idade.dia > 32){
        printf("\t\nDia invalido /");
        
        if(calc_idade.mes < 0 || calc_idade.mes > 12){
            printf("\tMes invalido /");

           if (calc_idade.ano < 0 || calc_idade.ano > 100 ){
            printf("\tAno invalido");
        
           }
        }
    }

    

    return 0;
}