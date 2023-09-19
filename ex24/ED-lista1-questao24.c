#include <stdio.h>

int main() 
/*
** Função: Calculando valor inteiro em segundos para horas, minutos e segundos
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    int seconds, hours, minutes, rest_seconds;

    printf("Digite o valor em segundos: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    rest_seconds = seconds % 3600;
    minutes =  rest_seconds / 60;
    rest_seconds = rest_seconds % 60;

    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos.\n", seconds, hours, minutes, rest_seconds);
    
    return 0;
}