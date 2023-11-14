#include <stdio.h>

/*
** Função: Programa calcula MOD e implementa o resto da divisão 
com uma função recursiva
** Autor: Felipe Nóbrega de Almeida
** Data: 14/11
** Observações:
*/


int mod(int x, int y) {  
    if(x < y) {
        return x;
    } else if(x == y) {
       return 0;
    } else if(x > y) {
        return(mod(x - y,y));
    }
}

int main()
{
    int x, y;
    
    printf("Informe (x): ");
    scanf("%d", &x);

    printf("Informe (y): ");
    scanf("%d", &y);

    int mod_result = mod(x,y);

    printf("O resto da divisao de %d por %d eh: %d\n", x, y, mod_result);

}
