#include <stdio.h>

int main()
/*
** Função: Classificar nadadores em categorias.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    int age;

    printf("Digite a sua idade: ");
    scanf("%d", &age);

    if(age >= 4 && age <= 7) {
        printf("Classificacao: Infantil A");
    } else if(age >= 8 && age <= 9) {
        printf("Classificacao: Infantil B");
    } else if(age >= 10 && age <= 12) {
        printf("Classificacao: Juvenil A");
    } else if(age >= 13 && age <= 17) {
        printf("Classificacao: Juvenil B");
    } else if(age >= 18 && age <= 25) {
        printf("Classificacao: Senior ");
    } else {
        printf("Idade fora da faixa etaria");
    }

    return 0;
}