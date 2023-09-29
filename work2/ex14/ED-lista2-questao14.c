#include <stdio.h>
#include <math.h>

int main()
/*
** Função: Calcula a posição ( s ) e a velocidade ( v ).
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
  int s0, v0, a, t;

   printf("Informe o posicao inicial: ");
   scanf("%d", &s0);

   printf("Informe o velocidade uinicial: ");
   scanf("%d", &v0);

   printf("Informe a aceleracao: ");
   scanf("%d", &a);

   printf("Informe o tempo: ");
   scanf("%d", &t);

   double s = s0 + v0 * t + 0.5 * a * t * t;
   double v = v0 + a * t; 

   printf("Posicao (s) no instante t: %lf\n", s);
   printf("Velocidade (v) no instante t: %lf\n", v);

    return 0;
}