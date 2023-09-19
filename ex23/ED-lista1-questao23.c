#include <stdio.h>

int main() 
/*
** Função: Calculando novo salário do funcionário, com um aumento de 25%
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float salary, new_salary;

    printf("Digite o seu salario: ");
    scanf("%f", &salary);

    new_salary = salary * 1.25;

    printf("Seu novo salario: %.2f", new_salary);
    
    return 0;
}