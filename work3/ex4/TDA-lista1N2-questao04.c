#include <stdio.h>

/*
** Função: Programa informa se o número é ou não primo, 
em seguida exibe todos os números primeiros entre 2 e o 
número inserido pelo usuário.
** Autor: Felipe Nóbrega de Almeida
** Data: 10/11
** Observações:
*/

int ePrimo(int num) {
  if (num <= 1) {
    return 0;
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return 0;
    } 
  }
  return 1;
}

int main() {
  int number;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &number);

  if (ePrimo(number)) {
    printf("%d eh primo.\n", number);
  } else {
    printf("%d nao eh primo.\n", number);
  }

  for (int i = 2; i <= number; i++) {
  if (ePrimo(i)) {
    printf("%d ", i);
   }
  }
  printf("\n");

  return 0;
}
