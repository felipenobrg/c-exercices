#include <stdio.h>

/*
** Função: Programa que tem como funçao para todo número par entre 2
e o numeros digitado pelo usuario. O programa deve imprimir cada número
e os primos correspondentes.
** Autor: Felipe Nóbrega de Almeida
** Data: 10/11
** Observações:
*/

int eh_par(int n)
{
    if (n % 2 == 0)
    {
        return n;
    }
    else
    {
        return 0;
    }
}

int eh_primo(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (n <= 3)
    {
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
  int user_number;
  printf("Digite um numero (2/n): ");
  scanf("%d", &user_number);

   for (int i = 2; i <= user_number; i += 2) {
        for (int j = 2; j <= i / 2; j++) {
            if (eh_primo(j) && eh_primo(i - j)) {
                printf("%d = %d + %d\n", i, j, i - j);
                break;
            }
        }
    }
    return 0;
}
