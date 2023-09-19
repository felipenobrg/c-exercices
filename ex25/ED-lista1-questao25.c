#include <stdio.h>
#include <math.h>

int main() 
/*
** Função: Lê cordenadas x e y de pontos no R2 e calcula a distância de origem
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    double x, y, distance;

    printf("Digite a coordenada x do ponto: ");
    scanf("%lf", &x);

    printf("Digite a coordenada y do ponto: ");
    scanf("%lf", &y);

    distance = sqrt(x * x + y * y);

    printf("A distancia da origem e: %.2lf.\n", distance);
    
    return 0;
}