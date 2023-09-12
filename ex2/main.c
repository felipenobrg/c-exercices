#include <stdio.h>

int main() 
{
    float speed_km, speed_ms;

    printf("Digite o valor da velocidade em km/h: ");
    scanf("%f", &speed_km);

    speed_ms = speed_km / 3.6;

    printf("Velocidade em m/s: %.1f", speed_ms);
    
    return 0;
}