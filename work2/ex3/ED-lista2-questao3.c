#include <stdio.h>
#include <math.h>

int main()
/*
** Função: Calcular fórmula IMC
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    double a, b, c;
    double delta, x1, x2;

    printf("Digite o coeficiente 'a' da equacao do segundo grau: ");
    scanf("%lf", &a);

    printf("Digite o coeficiente 'b' da equacao do segundo grau: ");
    scanf("%lf", &b);

    printf("Digite o coeficiente 'c' da equacao do segundo grau: ");
    scanf("%lf", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0)
    {
        printf("A equacao nao tem solucao real.\n");
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("A equacao tem uma unica raiz real: x = %.2lf\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equacao tem duas raizes reais: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    }

    return 0;
}
