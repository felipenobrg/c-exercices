#include <stdio.h>

/*
** Função: Calcula triângulo de Pascal de acordo com as linhas na qual o usuário escolhe
** Autor: Felipe Nóbrega de Almeida
** Data: 14/11
** Observações:
*/

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

void calculatePascal(int numLines) {
    for (int line = 0; line < numLines; line++) {
        for (int column = 0; column <= line; column++) {
            int coefficient = factorial(line) / (factorial(column) * factorial(line - column));
            printf("%d ", coefficient);
        }
        printf("\n");
    }
}

int main() {
    int numLinhas;

    printf("Digite o numero de linhas para o Triangulo de Pascal: ");
    scanf("%d", &numLinhas);

    if (numLinhas < 0) {
        printf("O numero de linhas deve ser um inteiro.\n");
        return 1;
    }
    calculatePascal(numLinhas);

    return 0;
}