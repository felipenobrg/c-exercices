#include <stdio.h>

/*
** Função: Programa calcula aproximação do número PI, usando a fórmula de
Leibiniz
** Autor: Felipe Nóbrega de Almeida
** Data: 13/11
** Observações:
*/

double calculatePi(int n) {
    double pi = 0.0;
    int sinal = 1;

    for (int i = 0; i < n; i++) {
        double termo = 1.0 / (2 * i + 1);
        if (sinal) {
            pi += termo;
        } else {
            pi -= termo;
        }
        sinal = !sinal; 
    }

    return 4.0 * pi; 
}

int main()
{
   int n;
    printf("Digite o numero de termos a serem usados na aproximacao de π: ");
    scanf("%d", &n);

    double aproximacaoPi = calculatePi(n);
    printf("Aproximacao de pi com %d termos: %lf\n", n, aproximacaoPi);

    return 0;
}
