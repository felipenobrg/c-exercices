#include <stdio.h>

/*
** Função: Programa que calcula dados e mostre o capital 
acumulado com o juro ao final de anos. 
** Autor: Felipe Nóbrega de Almeida
** Data: 11/11
** Observações:
*/

double calculates_amount(double capital, double interest, int years) {
  double amount = (capital * interest / 100) * years;

  return amount;
}

int main() {
  double capital, interest;
  int years;

  printf("Informe o capital: ");
  scanf("%lf", &capital);

  printf("Informe o juros: ");
  scanf("%lf", &interest);

  printf("Informe o numero de anos: ");
  scanf("%d", &years);

  double amount = calculates_amount(capital, interest, years);

  printf("O montante acumulado apos %d anos eh: %.2lf\n", years, amount);

  return 0;
}


