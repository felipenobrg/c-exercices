#include <stdio.h>

int main()
/*
** Função: Calcula notas de aluno e determina se o aluno 
está aprovado ou reprovado.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    float grade_p1, grade_p2, grade_p3, average = 0;

    printf("Digite a primeira nota: ");
    scanf("%f", &grade_p1);

    printf("Digite a segunda nota: ");
    scanf("%f", &grade_p2);

    average = (grade_p1 + grade_p2) / 2;

    if (grade_p1 >= 3.00 && grade_p2 >= 3.00)
    {

        if (average >= 5.00)
        {
            printf("Aprovado! Media final: %.2f\n", average);
        }
    }
    else
    {
        printf("Reprovado! Media final: %.2f\n", average);
        printf("Digite a nota da prova P3: ");
        scanf("%f", &grade_p3);
    }

    float biggest_grade = (grade_p1 > grade_p2) ? grade_p1 : grade_p2;
    float final_average = (biggest_grade + grade_p3) / 2;

    if (final_average >= 5.0)
    {
        printf("Aprovado! Media final: %.2f\n", final_average);
    }
    else
    {
        printf("Reprovado! Media final: %.2f\n", final_average);
    }

    return 0;
}