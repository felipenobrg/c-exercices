#include <stdio.h>
#include <math.h>

int main()
/*
** Função: Verificando se um número 
inteiro é impar ou par.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    int user_number;

    printf("Digite um numero inteiro: ");
    scanf("%d", &user_number);

    if (user_number % 2 == 0)
    {
        printf("%d é um numero par.\n", user_number);
    }
    else
    {
        printf("%d é um numero ímpar.\n", user_number);
    }

    return 0;
}