#include <stdio.h>

int main() 
/*
** Função: Transformar velocidade em m/s para km/h
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float speed_km, speed_ms;

    printf("Digite o valor em m/s: ");
    scanf("%f", &speed_ms);

    speed_km = speed_ms * 3.6;

    printf("Velocidade em km/h: %.1f", speed_km);
    
    return 0;
}