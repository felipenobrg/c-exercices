#include <stdio.h>
#include <math.h>

int main()
/*
** Função: Converte as cordenadas polares 
em cordenada cartesianas.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    double r, a;
    double x, y;

    printf("Digite o valor do raio (r): ");
    scanf("%lf", &r);
    printf("Digite o valor do angulo em graus (a): ");
    scanf("%lf", &a);

    double pi = 3.1415;

    a = a * pi / 180.0;

    x = r * cos(a);
    y = r * sin(a);

    printf("Coordenadas cartesianas (x, y): (%.2lf, %.2lf)\n", x, y);

    return 0;
}