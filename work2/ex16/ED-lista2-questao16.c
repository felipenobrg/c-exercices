#include <stdio.h>

int main()
/*
** Função: Converte diferente unidades de acordo com as opções do usuário.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
        int choice1, choice2;
        double value, result;

        printf("Escolha a classe de unidade:\n");
        printf("1. Peso\n");
        printf("2. Volume\n");
        printf("3. Comprimento\n");
        scanf("%d", &choice1);

        printf("Escolha a conversao:\n");
        switch (choice1)
        {
        case 1:
            printf("Peso:\n");
            printf("1. Libra para Quilograma\n");
            printf("2. Quilograma para Libra\n");
            printf("3. Onça para Grama\n");
            printf("4. Grama para Onça\n");
            break;
        case 2:
            printf("Volume:\n");
            printf("1. Galao para Litro\n");
            printf("2. Litro para Galao\n");
            printf("3. Onca para Mililitro\n");
            printf("4. Mililitro para Onça\n");
            break;
        case 3:
            printf("Comprimento:\n");
            printf("1. Milha para Quilometro\n");
            printf("2. Quilometro para Milha\n");
            printf("3. Jardas para Metro\n");
            printf("4. Metro para Jardas\n");
            break;
        default:
            printf("Opção invalida.\n");
            return 1;
        }

        scanf("%d", &choice2);

        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &value);

        switch (choice1)
        {
        case 1:
            switch (choice2)
            {
            case 1:
                result = value * 0.453592;
                break;
            case 2:
                result = value * 2.20462;
                break;
            case 3:
                result = value * 28.3495;
                break;
            case 4:
                result = value * 0.035274;
                break;
            default:
                printf("Opcao Invalida.\n");
                return 1;
            }
            break;
        case 2:
            switch (choice2)
            {
            case 1:
                result = value * 3.78541;
                break;
            case 2:
                result = value * 0.264172;
                break;
            case 3:
                result = value * 29.5735;
                break;
            case 4:
                result = value * 0.033814;
                break;
            default:
                printf("Opcao invalida.\n");
                return 1;
            }
            break;
        case 3:
            switch (choice2)
            {
            case 1:
                result = value * 1.60934;
                break;
            case 2:
                result = value * 0.621371;
                break;
            case 3:
                result = value * 0.9144;
                break;
            case 4:
                result = value * 1.09361;
                break;
            default:
                printf("Opcao invalida.\n");
                return 1;
            }
            break;
        default:
            printf("Opcao invalida.\n");
            return 1;
        }

        printf("Resultado: %.2lf\n", result);

        return 0;
    }

