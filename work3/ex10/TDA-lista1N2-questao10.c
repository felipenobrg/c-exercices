#include <stdio.h>

/*
** Função: Eleva número (base) a outro (expoente) usando
função recursiva.
** Autor: Felipe Nóbrega de Almeida
** Data: 14/11
** Observações:
*/

float pot(float base, int expoente);

int main() {
    float base;
    int expoente;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("%.2f elevado a %d é %.2f\n", base, expoente, pot(base, expoente));

    return 0;
}

float pot(float base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    else {
        return base * pot(base, expoente - 1);
    }
}
