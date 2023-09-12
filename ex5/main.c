#include <stdio.h>

int main()
{
    float value_real, value_dolar, quotation;

    printf("Insira o valor em reais para transformar em dolar: ");
    scanf("%f", &value_real);
    printf("Insira a cotacao atual: ");
    scanf("%f", &quotation);

    value_dolar = value_real / quotation;

    printf("Valor em dolar: $%.1f", value_dolar);

    return 0;
}