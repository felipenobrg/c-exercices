#include <stdio.h>

/*
** Função: Mostra a representação de um número provido pelo usuário
em um sistema de numeração.
** Autor: Felipe Nóbrega de Almeida
** Data: 14/11
** Observações:
*/

void baseRepresatation(int num, int base);

int main() {
    int numero, base;

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    printf("Digite a base desejada: ");
    scanf("%d", &base);
   
    baseRepresatation(number, base);

    return 0;
}

void baseRepresatation(int num, int base) {
    int representacao[32];
    int indice = 0;

    while (num > 0) {
        representacao[indice] = num % base;
        num /= base;
        indice++;
    }

    printf("A representaco de %d na base %d eh: ", num, base);
    for (int i = indice - 1; i >= 0; i--) {
        if (representation[i] < 10) {
            printf("%d", representation[i]);
        } else {
            printf("%c", 'A' + representation[i] - 10);
        }
    }
    printf("\n");
}
