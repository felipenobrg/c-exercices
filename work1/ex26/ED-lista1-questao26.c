#include <stdio.h>
#include <math.h>

int main() 
/*
** Função: Lê o horário de início e duração, em segundos e cria um novo horário
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    int hour_start, minute_start, second_start;
    int duration_seconds;

    printf("Digite a hora de inicio (0-23): ");
    scanf("%d", &hour_start);

    printf("Digite o minuto de inicio (0-59): ");
    scanf("%d", &minute_start);

    printf("Digite o segundo de inicio (0-59): ");
    scanf("%d", &second_start);

    printf("Digite a duracao em segundos: ");
    scanf("%d", &duration_seconds);

    int new_second = second_start + duration_seconds;
    int new_minute = minute_start + new_second / 60;
    int new_hour = hour_start + new_minute / 60;

    new_second %= 60;
    new_minute %= 60;
    new_hour %= 24;

      printf("O novo horario de termino e: %02d:%02d:%02d\n", new_hour, new_minute, new_second);
}