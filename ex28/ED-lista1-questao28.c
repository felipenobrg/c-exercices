#include <stdio.h>

int main() 
/*
** Função: Calcula diferença entre duas horas distintas deum mesmo dia e 
retorna um intervalo de tempo entre os dois horário
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    int hour1, minute1, second1;
    int hour2, minute2, second2;
    int diferenceHour, diferenceMinute, diferenceSecond;

    printf("Digite a primeira hora (HH:MM:SS): ");
    scanf("%d:%d:%d", &hour1, &minute1, &second1);

    printf("Digite a segunda hora (HH:MM:SS): ");
    scanf("%d:%d:%d", &hour2, &minute2, &second2);

    diferenceSecond = second1 - second2;
    diferenceMinute = minute1 - minute2;
    diferenceHour = hour1 - hour2;

    printf("Diferenca de segundo: %02d:%02d:%02d", diferenceHour, diferenceMinute, diferenceSecond);

    return 0;
}