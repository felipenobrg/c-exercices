#include <stdio.h>

int main() 
/*
** Função: Converter uma área em metros quadrados para acres 
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float square_meters, acres;

    printf("Digite uma area em metros quadrados: ");
    scanf("%f", &square_meters);

    acres = square_meters * 4046.86;

    printf("Valor em litros: %.2f", acres);
    
    return 0;
}