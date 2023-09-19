#include <stdio.h>

int main() 
/*
** Função: Transformar distância de milhas para kilometros
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float km, miles;

    printf("Digite a distancia em milhas: ");
    scanf("%f", &miles);

    km = miles * 1.60934;

    printf("Velocidade em km/h: %.1f", km);
    
    return 0;
}