#include <stdio.h>

int main() 
/*
** Função: Converter um angulo em graus para radiano
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float degrees, radian;

    printf("Digite um angulo em graus: ");
    scanf("%f", &degrees);

    radian = (degrees * 3.14) / 180.0;

    printf("Angulo em radiano: %.1f", radian);
    
    return 0;
}