#include <stdio.h>

int main() 

/*
** Função: Média de 5 notas
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    int grade1, grade2, grade3, grade4, grade5;
    float average;
    
    printf("Digite o valor da primeira media: ");
    scanf("%d", &grade1);

    printf("Digite o valor da segunda media: ");
    scanf("%d", &grade2);

    printf("Digite o valor da terceira media: ");
    scanf("%d", &grade3);

    printf("Digite o valor da quarta media: ");
    scanf("%d", &grade4);

    printf("Digite o valor da quinta media: ");
    scanf("%d", &grade5);

    average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
    printf("Media: %.1f", average);

    return 0;
}
