#include <stdio.h>

int main()
/*
** Função: Verifica se uma data é válida.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    int day, month, year;

    printf("Digite a data (dia / mes / ano): ");
    scanf("%d %d %d", &day, &month, &year);

    if (month < 1 || month > 12)
    {
        printf("Mes incorreto.\n");
    }
    else if ((month == 2 && day > 28) || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)) 
    {
        printf("Dia incorreto para o mes especificado.\n");
    }
    else
    {
        printf("A data e valida.\n");
    }
    return 0;
}


