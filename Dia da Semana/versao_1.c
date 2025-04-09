#include <stdio.h>

int main(){
    int dia;

    printf("Ola, voce poderia por favor me dizer qual o dia da semana? \n\n 1-Segunda-Feira\n 2-Terca-feira\n 3-Quarta-Feira\n 4-Quinta-Feira\n 5-Sexta feira\n 6-Sabado\n 7-Domingo\n Insira aqui o numero correspondente: ");
    scanf("%d", &dia);


while(dia < 1 || dia > 7){
    printf("Número da semana invalido, insira um numero correspondente: ");
    scanf("%d", &dia);
}
    if (dia == 1){
        printf("Hoje seria segunda-feira");
    }
        else if (dia == 2){
            printf("Hoje seria terca-feira");
        }
            else if (dia == 3){
                printf("Hoje seria quarta-feira");
            }
                else if (dia == 4){
                    printf("Hoje seria quinta-feira");
                }
                    else if(dia == 5) {
                        printf("Hoje seria sexta-feira");
                    }
                        else if(dia == 6){
                            printf("Hoje seria sabado");
                        }
                            else{
                                printf("Hoje seria domingo");
                            } 
    return 0;
}