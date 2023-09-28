#include <stdio.h>

int main()
/*
** Função: Calculando media e media de aproveitamento.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    float grade1, grade2, grade3, average, average_utilization;
    int identification_number;

    printf("Digite seu numero de identificacao: ");
    scanf("%d", &identification_number);

    printf("Digite a primeira nota: ");
    scanf("%f", &grade1);

    printf("Digite a segunda nota: ");
    scanf("%f", &grade2);

    printf("Digite a terceira nota: ");
    scanf("%f", &grade3);

    average = (grade1 + grade2 + grade3) / 3;

    average_utilization = (grade1 + grade2 * 2 + grade3 * 3 + average) / 7;

    printf("Numero do aluno: %d \n", identification_number);
    printf("Media dos exercicios: %.2f \n", average);
    printf("Media dos aproveitamento: %.2f \n", average_utilization);

    if (average_utilization > 9)
    {
        printf("Clasificacao: A \n");
        printf("Aprovado \n");
    }
    else if (average_utilization >= 7.5 && average_utilization < 9)
    {
        printf("Clasificacao: B \n");
        printf("Aprovado \n");
    }
    else if (average_utilization >= 6.0 && average_utilization < 7.5)
    {
        printf("Clasificacao: C \n");
        printf("Aprovado \n");
    }
    else if (average_utilization >= 4.0 && average_utilization < 6.0)
    {
        printf("Clasificacao: D \n");
        printf("Reprovado");
    }
    else if (average_utilization < 4.0)
    {
        printf("Clasificacao: E \n");
        printf("Reprovado \n");
    }

    return 0;
}