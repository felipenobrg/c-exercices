#include <stdio.h>

int main()
/*
** Função: Determinar resultado do quadrado e do cubo do número fornecido
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/
{
   double number, square, cube;

   printf("Insira um numero real: ");
   scanf("%lf", &number);

   square = number * number;
   cube = number * number * number;

   printf("O quadrado de %.2lf e %.2lf\n", number, square);
   printf("O cubo de %.2lf e %.2lf\n", number, cube);
   return 0;
}