#include <stdio.h>

int main()
/*
** Função: Transformar em Kelvin para Celsius
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/
{
    float kelvin_value, celsius_value;

    printf("Digite um numero em Kelvin: ");
    scanf("%f", &kelvin_value);

    celsius_value = (kelvin_value - 273) * 1.8 + 32;

    printf("%.2f graus Kelvin equivalem a %.2f graus Celcius. \n", kelvin_value, celsius_value);
    return 0;
}