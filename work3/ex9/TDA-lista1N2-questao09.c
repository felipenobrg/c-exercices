#include <stdio.h>

/*
** Função: Programa calcula multiplicação entre dois números inteiros 
e exibe toda as tabuadas de 2 até um número digitas pelo usuário
** Autor: Felipe Nóbrega de Almeida
** Data: 14/11
** Observações:
*/

int calculate_mult(int a, int b) {
  if (b == 1) {
        return a;
    } else {
        return a + calculate_mult(a, b - 1);
    }
}

void calculate_table(int n, int current, int limit) {
    if (current <= 10) {
        printf("%d x %d = %d\n", n, current, calculate_mult(n, current));
        calculate_table(n, current + 1, limit);
    } else {
        printf("\n");
        if (n < limit) {
           calculate_table(n + 1, 1, limit);
        }
    }
}


int main()
{
    int userLimit;

    printf("Digite o limite para exibir as tabuadas: ");
    scanf("%d", &userLimit);

    calculate_table(2, 1, userLimit);

    return 0;
}
