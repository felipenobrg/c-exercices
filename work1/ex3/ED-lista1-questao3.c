#include <stdio.h>

int main() 

/*
** Função: Ler dois números e informar o dividendo, e e o resto do primeiro pelo
segundo e do segundo pelo primeiro
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    int first_number, second_number, rest1, rest2;
    float quotient1, quotient2;

    printf("Escreva o primeiro numero: ");
    scanf("%d", &first_number);

    printf("Escreva o segundo numero: ");
    scanf("%d", &second_number);

    quotient1 = first_number / second_number;
    quotient2 = second_number / first_number;

    rest1 = first_number % second_number;
    rest2 = second_number % first_number;

    printf("Os numeros digitados sao: %d e %d\n", first_number, second_number);
    printf("O primeiro pelo segundo: %.1f\n", quotient1);
    printf("O segundo pelo primeiro: %.1f\n", quotient2);
    printf("O resto do primeiro: %.1d\n", rest1);
    printf("O resto do segundo: %.1d", rest2);
    
    return 0;
}