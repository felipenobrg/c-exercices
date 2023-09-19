#include <stdio.h>

int main()
/*
** Função: Transformar em Celsius para Fahrenheit
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/
{
    float celsius_value, fahrenheit_value;

    printf("Digite um numero em fahrenheit: ");
    scanf("%f", &fahrenheit_value);

    celsius_value = (celsius_value * 1.8) + 32.0;

    printf("%.2f graus Fahrenheit equivalem a %.2f graus Celcius. \n", fahrenheit_value, celsius_value);
    return 0;
}