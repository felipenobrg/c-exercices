#include <stdio.h>

int main() 
/*
** Função: Converter uma área em acres quadrados para metros quadrados 
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float square_meters, acres;

    printf("Digite uma area em acres: ");
    scanf("%f", &acres);

    square_meters = acres * 4046.86;

    printf("Valor em metros quadradis: %.2f", acres);
    
    return 0;
}