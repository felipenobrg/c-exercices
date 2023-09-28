#include <stdio.h>

int main() 
/*
** Função: Calcula a densidade de uma substância 
** Autor: Felipe Nóbrega de Almeida
** Data: 20/09
** Observações:
*/

{
   float mass, volume, density;

   printf("Informe a massa");
   scanf("%f", &mass);

    printf("Informe o volume");
    scanf("%f", &volume);

    density = mass / volume;

    printf("Densidade: %.f", density);
  

    return 0;
}