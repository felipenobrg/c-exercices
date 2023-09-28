#include <stdio.h>

int main()
/*
** Função: Calcular total gasto por frangos.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    int chicken_quantity;
    float total_value;

    printf("Digite a quantidade de frangos: ");
    scanf("%d", &chicken_quantity);

    if (chicken_quantity < 0)
    {
        printf("Digite uma quantidade maior que 0");
    }

    total_value = chicken_quantity * 8;

    printf("Valor total R$: %.2f", total_value);

    return 0;
}