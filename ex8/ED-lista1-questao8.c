#include <stdio.h>

int main()
/*
** Função: Determinar a quinta parte de um número
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/
{
   double number, fifthPart;

   printf("Insira um numero real: ");
   scanf("%lf", &number);

   fifthPart = number / 5.0;


   printf("A quinta parte do numero %.2lf e %.2lf\n", fifthPart);
   return 0;
}