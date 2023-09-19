#include <stdio.h>

int main() 
/*
** Função: Calcula salário líquido de um professor
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float class_hour, discount_inss, total_salary, gross_salary, inss_discount;
    int number_class;
    printf("Insira o valor da hora aula: ");
    scanf("%f", &class_hour);

    printf("Insira o numero de aulas no mes: ");
    scanf("%d", &number_class);

    printf("Insira o percentual de desconto do INSS: ");
    scanf("%f", &discount_inss);

    gross_salary = class_hour * number_class;

    inss_discount = (gross_salary * discount_inss) / 100;

    total_salary = gross_salary - inss_discount;

    printf("Salario liquido do professor: %.2f", total_salary);

    return 0;
}