#include <stdio.h>

int main()
/*
** Função: Soma de três valores inteiros
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/
{
    int value1, value2, value3, sum;

    printf("Insira o primeiro valor: ");
    scanf("%d", &value1);
    printf("Insira o segundo valor: ");
    scanf("%d", &value2);
     printf("Insira o terceiro valor: ");
    scanf("%d", &value3);

    sum = value1 + value2 + value3;
    
    printf("Soma dos valores inteiros: %.1d", sum);

    return 0;
}