#include <stdio.h>
#include <math.h>

/*
** Função: Calcular a sequência de Fibonacci do número dado pelo usuário
** Autor: Felipe Nóbrega de Almeida
** Data: 13/11
** Observações:
*/

double fibonacci_calculus(int n) {
   double ratio = 1.6180;
   return (pow(ratio, n) - pow(ratio, - n)) / sqrt(5);
}

int main()
{
    int user_number;
    printf("Digite um numero: ");
    scanf("%d", &user_number);

    for(int i = 0; i <= user_number; i++) {
     double result = fibonacci_calculus(i);
     printf("%.0lf", result);
    }

    return 0;
}
