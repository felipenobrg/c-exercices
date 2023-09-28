#include <stdio.h>

int main() 
/*
** Função: Converter um valor em metros cúbicos para litros 
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float cubic_meters, liters;

    printf("Digite um valor em metros cubicos: ");
    scanf("%f", &cubic_meters);

    liters = cubic_meters * 1000.0;

    printf("Valor em litros: %.2f", liters);
    
    return 0;
}