#include <stdio.h>

/*
** Função: Função que verifica se todos os numeros de 1
até N digitado pelo usuário número é par ou ímpar
** Autor: Felipe Nóbrega de Almeida
** Data: 10/11
** Observações:
*/

int eh_par(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int valor_maximo;
    printf("Digite o valor maximo: ");
    scanf("%d", &valor_maximo);

    printf("Numeros de 1 ate %d:\n", valor_maximo);

    for (int i = 1; i <= valor_maximo; i++) {
        if (eh_par(i)) {
            printf("%d eh par.\n", i);
        } else {
            printf("%d eh impar.\n", i);
        }
    }

    return 0;
}
