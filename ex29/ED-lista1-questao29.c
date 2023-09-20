#include <stdio.h>
#include <math.h>

int main() 
/*
** Função: Calcula a velocidade de um corpo, usando a equação de Torricelli
** Autor: Felipe Nóbrega de Almeida
** Data: 20/09
** Observações:
*/

{
    float initial_speed, final_speed, aceleration, space_covered;

    printf("Digite a velocidade inicial em m/s: ");
    scanf("%f", &initial_speed);

    printf("Digite a aceleracao em m/s: ");
    scanf("%f", &aceleration);

    printf("Digite o espaco percorrido: ");
    scanf("%f", &space_covered);

    final_speed = sqrt(initial_speed * initial_speed + 2 * aceleration * space_covered);

    printf("Velocidade final: %.f  m/s", final_speed);

    return 0;
}