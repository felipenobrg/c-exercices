#include <stdio.h>
#include <string.h>

int main()
/*
** Função: Converter temperatura em Celsius para Fahrenheit ou vice-versa,
dependendo da escolha do usuário.
** Autor: Felipe Nóbrega de Almeida
** Data: 29/09
** Observações:
*/
{
    char user_choose[2];
    float fahrenheit_value, celsius_value;

    printf("Escolha converter de Celsius para Fahrenheit (CF) ou Fahrenheit para Celsius (FC): ");
    scanf("%2s", user_choose);

    if (strcmp(user_choose, "CF") == 0 || strcmp(user_choose, "cf") == 0)
    {
        printf("Digite o valor em Celsius: ");
        scanf("%f", &celsius_value);

        fahrenheit_value = (celsius_value * 9.0 / 5.0) + 32.0;
        printf("Valor em Fahrenheit: %.2f", fahrenheit_value);
    }
    else if (strcmp(user_choose, "FC") == 0 || strcmp(user_choose, "fc") == 0)
    {
        printf("Digite o valor em Fahrenheit: ");
        scanf("%f", &fahrenheit_value);
        
        celsius_value = (fahrenheit_value * 1.8) + 32.0;
        printf("Valor em Celsius: %.2f", celsius_value);
    }

    return 0;
}