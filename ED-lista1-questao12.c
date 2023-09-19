#include <stdio.h>

int main()
/*
** Função: Transformar em Celsius para Kelvin
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/
{
    float kelvin_value, celsius_value;

    printf("Digite um numero em Celsius: ");
    scanf("%f", &celsius_value);

    kelvin_value = celsius_value - 273;

    printf("%.2f graus Celsius equivalem a %.2f graus Kelvin. \n", celsius_value, kelvin_value);
    return 0;
}