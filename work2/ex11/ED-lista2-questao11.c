#include <stdio.h>

int main()
/*
** Função: Imprime os números em ordem crescente.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    int number1, number2, number3, order;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &number1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &number2);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &number3);

    if (number1 > number2) {
        order = number1;
        number1 = number2;
        number2 = order;
    }

    if (number2 > number3) {
        order = number2;
        number2 = number3;
        number3 = order;
    }

    if (number1 > number2) {
        order = number1;
        number1 = number2;
        number2 = order;
    }

    printf("Os numeros em ordem crescente sao: %d, %d, %d\n", number3, number2, number1);

    return 0;
}