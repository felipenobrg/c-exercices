#include <stdio.h>

int main() 
/*
** Função: Converter um valor em polegadas para cm 
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float inches, cm;

    printf("Digite um valor polegadas: ");
    scanf("%f", &inches);

    cm = inches * 2.54;

    printf("Valor em polegadas: %.2f", cm);
    
    return 0;
}