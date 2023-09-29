#include <stdio.h>

int main()
/*
** Função: Verifica se um ano é bissexto ou não.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    int user_year;

    printf("Informe o ano: ");
    scanf("%d", &user_year);
  
   if ((user_year % 400 == 0) || ((user_year % 4 == 0) && (user_year % 100 != 0))) {
        printf("Eh um ano bissexto.");
    } else {
        printf("Nao e um ano bissexto.");
    }

    return 0;
}