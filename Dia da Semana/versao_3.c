#include <stdio.h>

int main(){
    int dia;
    char *dias[] = {"segunda", "terca", "quarta", "quinta", "sexta", "sabado", "domingo"};

    printf("Escolha um dia da semana\n 1-Segunda-Feira\n 2-Terca-feira\n 3-Quarta-Feira\n 4-Quinta-Feira\n 5-Sexta feira\n 6-Sabado\n 7-Domingo\n Insira aqui o numero correspondente:");
    scanf("%d", &dia);

    while(dia < 1 || dia > 7){
        printf("Digite um numero compativel com o numero do dia da semana: ");
        scanf("%d", &dia);
    }
        printf("Seu dia da semana e %s", dias[dia - 1]);
        return 0;
}
