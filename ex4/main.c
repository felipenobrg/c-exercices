#include <stdio.h>

int main() 
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