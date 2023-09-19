#include <stdio.h>

int main() 
/*
** Função: Converter um angulo em radianos para graus 
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float degrees, radian;

    printf("Digite um angulo em radiano: ");
    scanf("%f", &radian);

    degrees = (radian * 180.0) / 3.14;

    printf("Angulo em graus: %.1f", degrees);
    
    return 0;
}