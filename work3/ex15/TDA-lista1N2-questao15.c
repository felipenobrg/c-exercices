#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
** Função: Programa simula o lançamento de dados.
** Autor: Felipe Nóbrega de Almeida
** Data: 17/11
** Observações:
*/

#define MAX_ROLLS 1000

int rollDie() {
    return rand() % 6 + 1;
}

void printFrequencyTable() {
    printf("Face\tFrequencia\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\t", i + 1);
        printf(" xxxxx");
        printf(" vezes\n");
    }
}

int main() {
    unsigned int maxRolls, rollCount;
    int dice1, dice2, sum;
    int frequency[6] = {0};

    printf("Informe a quantidade de lancamentos (MAX): ");
    scanf("%u", &maxRolls);

    srand((unsigned int)time(NULL));

    printf("\nResultado dos lancamentos:\n");

    for (rollCount = 1; rollCount <= maxRolls; rollCount++) {
        dice1 = rollDie();
        dice2 = rollDie();
        sum = dice1 + dice2;

        printf("Jogada %u:\tDado 1: %d\tDado 2: %d\tSoma: %d\n", rollCount, dice1, dice2, sum);

        frequency[sum - 1]++;
    }

    printFrequencyTable();

    int mostFrequent[3] = {-1, -1, -1};
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            if (mostFrequent[j] == -1 || frequency[i] > frequency[mostFrequent[j]]) {
                for (int k = 2; k > j; k--) {
                    mostFrequent[k] = mostFrequent[k - 1];
                }
                mostFrequent[j] = i;
                break;
            }
        }
    }

    printf("\nAs tres faces mais sorteadas:\n");
    printf("Face\tFrequencia\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%d\n", mostFrequent[i] + 1, frequency[mostFrequent[i]]);
    }

    return 0;
}