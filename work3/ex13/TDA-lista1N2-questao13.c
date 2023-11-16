#include <stdio.h>

/*
** Função: Programa calcula valor inteiro da divisão entre dois numeros inteiros.
** Autor: Felipe Nóbrega de Almeida
** Data: 16/11
** Observações:
*/


int quociente(int m, int n) {
    if (m < n) {
        return 0;
    } else {
        return 1 + quociente(m - n, n);
    }
}

int main() {
    int result = quociente(10, 3);
    printf("Quociente: %d\n", result);

    return 0;
}
