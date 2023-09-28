#include <stdio.h>
#include <math.h>

int main()
/*
** Função: Imprimir o resultado de a, b e c.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    double a, b, result;
    char c;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &a);

    printf("Digite o segundo valor: ");
    scanf("%lf", &b);

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    switch (c)
    {
    case '+':
        result = a + b;
        printf("Resultado: %.2lf\n", result);
        break;
    case '-':
        result = a - b;
        printf("Resultado: %.2lf\n", result);
        break;
    case '*':
        result = a * b;
        printf("Resultado: %.2lf\n", result);
        break;
    case '/':
        if (b != 0)
        {
            result = a / b;
            printf("Resultado: %.2lf\n", result);
        }
        else
        {
            printf("Erro: Divisão por zero!\n");
        }
        break;
    case '^':
        result = pow(a, b);
        printf("Resultado: %.2lf\n", result);
        break;
    default:
        printf("Operador não definido!\n");
        break;
    }

    return 0;
}
