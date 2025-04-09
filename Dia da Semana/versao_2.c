#include <stdio.h>

int main(){
    int dia;

    printf("Ola, voce poderia por favor me dizer qual o dia da semana? \n\n 1-Segunda-Feira\n 2-Terca-feira\n 3-Quarta-Feira\n 4-Quinta-Feira\n 5-Sexta feira\n 6-Sabado\n 7-Domingo\n Insira aqui o numero correspondente: ");
    scanf("%d", &dia);


while(dia < 1 || dia > 7){
    printf("Número da semana invalido, insira um numero correspondente: ");
    scanf("%d", &dia);
}

switch (dia) {
    case 1: printf("Segunda"); break;
    case 2: printf("Terca"); break;
    case 3: printf("Quarta"); break;
    case 4: printf("Quinta"); break;
    case 5: printf("Sexta"); break;
    case 6: printf("Sabado"); break;
    case 7: printf("Domingo"); break;
    }
    return 0;
}
