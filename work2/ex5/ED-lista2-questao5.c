#include <math.h>

int main()
/*
** Função: Lê três valores inteiros, verificar se eles podem ser os lados de
um triângulo e o tipo de triângulo.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
    int side1, side2, side3;

    printf("Digite o primeiro lado: ");
    scanf("%d", &side1);

    printf("Digite o segundo lado: ");
    scanf("%d", &side2);

    printf("Digite o terceiro lado: ");
    scanf("%d", &side3);

    if (side1 + side2 > side3 &&  side1 + side3 > side2 && side2 + side3 > side1)
    {
        if (side1 == side2 && side1 == side3)
        {
            printf("É um triângulo equilátero e também isóscele.\n")
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            printf("É um triângulo isóscele.\n");
        }
        else
        {
            printf("É um triângulo escaleno.\n");
        }
    }
    else
    {
        printf("Essas medidas nao formam um triângulo")
    }
    return 0;
}
