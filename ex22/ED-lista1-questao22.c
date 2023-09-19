#include <stdio.h>

int main() 
/*
** Função: Calcular o volume do cilindro
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float height, ray, volume;

    printf("Digite a altura do cilindro circular: ");
    scanf("%f", &height);

    printf("Digite o raio do cilindro circular: ");
    scanf("%f", &ray);

    volume = 3.14 * (ray * ray) * height;

    printf("Volume do cilindro: %.2f", volume);
    
    return 0;
}