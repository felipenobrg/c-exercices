#include <stdio.h>

int main()
/*
** Função: Calcula a porcentagem quantos % 
um número é maior que outro. 
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    int number1, number2, difference;
    float percentage;

    printf("Digite o primeiro numero: ");
    scanf("%d", &number1);

    printf("Digite o segundo numero: ");
    scanf("%d", &number2);

    difference = number1 - number2;

    percentage = ((float)difference / number2) * 100;

    printf("A diferenca em porcentagem entre %d, e %d, eh igual: %.2f porcento", number1, number2, percentage);

    return 0;
}