#include <stdio.h>

int main() 
/*
** Função: Algoritmo que determina a área e o perímetro de um retângulo
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/
{ 
    float length, width, area, perimeter;

    printf("Informe o comprimento do retangulo: ");
    scanf("%f", &length);
    printf("Informe a largura do retangulo: ");
    scanf("%f", &width);

    area = length * width;

    perimeter = 2 * (width + length);

    printf("Area do retangulo: %.1f\n", area);
    printf("Perimetro do retangulo: %.1f", perimeter);
    
    return 0;
}