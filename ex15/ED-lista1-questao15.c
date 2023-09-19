#include <stdio.h>

int main() 
/*
** Função: Transformar distância de kilometros para milhas
** Autor: Felipe Nóbrega de Almeida
** Data: 19/09
** Observações:
*/

{
    float km, miles;

    printf("Digite a distancia em kilometros: ");
    scanf("%f", &km);

    miles = km * 0.621371;

    printf("Velocidade em milhas: %.1f", miles);
    
    return 0;
}