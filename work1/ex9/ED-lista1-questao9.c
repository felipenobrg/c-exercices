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

    printf("Digite um numero em celsius: ");
    scanf("%f", &celsius_value);

    fahrenheit_value = (celsius_value * 9.0 / 5.0) + 32.0;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit. \n", celsius_value, fahrenheit_value);
    return 0;
}