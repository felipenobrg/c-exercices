#include <stdio.h>
#include <math.h>

int main()
/*
** Função: Listar a ordem e os resultados das expressões
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    float a, b, c, d, e, f, g, h, i, j;
    float factorial_5;

    factorial_5 = 5 * 4 * 3 * 2 * 1;

    a = 2 + 3 - (5 * 8) / 4;
    b = (7 * 4) / 2 + 9 - 6;
    c = (4 / 2) / 0.5 * ((4 % 2)) * 0.5;
    d = 7 > 2 && 3 - 5 < 8;
    e = !(3 + factorial_5 == (5 / 2) - 1);
    f = ((7 % 3)) - 8 + (4 / 2);
    g = (6 / 3) - 3 * ((4 % 2));
    h = 10 > 11 && 11 < 12;
    i = 9 / 3 + ((9 % 3)) + 9 * 3;
    j = 1 + 2 + (3 / 2);

    printf("A: %.f, Resultado: -5 \n", a);
    printf("B: %.f, Resultado: 17 \n", b);
    printf("C: %.f, Resultado: 0 \n", c);
    printf("D: %.f, Resultado: 1\n", d);
    printf("E: %.f, Resultado: 1\n", e);
    printf("F: %.f, Resultado: -5\n", f);
    printf("G: %.f, Resultado: 2\n", g);
    printf("H: %.f, Resultado: 0\n", h);
    printf("I: %.f, Resultado: 30\n", i);
    printf("J: %.f, Resultado: 4\n", j);
    return 0;
}
