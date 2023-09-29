#include <stdio.h>

int main()
/*
** Função: Calcula maior número dentre os digitados. 
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    int number1, number2, number3, biggest_number;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &number1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &number2);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &number3);

    biggest_number = number1;

    if (number2 > biggest_number) {
        biggest_number = number2;
    } else if (number3 > biggest_number) {
        biggest_number = number3;
    }

    printf("O maior numero e: %d", biggest_number);

    return 0;
}