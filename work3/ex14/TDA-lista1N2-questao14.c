#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*
** Função: Programa ler vetor com media dos alunos e em seguida seguida exibir todas 
as notas (o vetor inteiro), a maior e a menor nota da turma, a média das notas dos alunos, 
quantos alunos ficaram acima da média, quantos ficaram abaixo, quantos ficaram na média e 
a variância e o desvio padrão.

** Autor: Felipe Nóbrega de Almeida
** Data: 16/11
** Observações:
*/

void fillGrades(float grades[], int quantity) {
    for (int i = 0; i < quantity; i++) {
        printf("Informe as notas para os alunos%d: ", i + 1);
        scanf("%f", &grades[i]);
    }
}


void generateRandomGrades(float grades[], int quantity) {
    srand((unsigned int)time(NULL));
    for (int i = 0; i < quantity; i++) {
        grades[i] = rand() % 101; 
    }
}

void displayGrades(float grades[], int quantity) {
    printf("Mostrar notas:\n");
    for (int i = 0; i < quantity; i++) {
        printf("%.2f ", grades[i]);
    }
    printf("\n");
}

float findHighestGrade(float grades[], int quantity) {
    float highest = grades[0];
    for (int i = 1; i < quantity; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

float findLowestGrade(float grades[], int quantity) {
    float lowest = grades[0];
    for (int i = 1; i < quantity; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

float calculateAverage(float grades[], int quantity) {
    float sum = 0;
    for (int i = 0; i < quantity; i++) {
        sum += grades[i];
    }
    return sum / quantity;
}

float calculateVariance(float grades[], int quantity, float average) {
    float sum = 0;
    for (int i = 0; i < quantity; i++) {
        sum += pow(grades[i] - average, 2);
    }
    return sum / quantity;
}

float calculateStandardDeviation(float variance) {
    return sqrt(variance);
}

int main() {
    int studentsQuantity, option;
    printf("Informe o numero dos estudantes entre 10/100): ");
    scanf("%d", &studentsQuantity);

    if (studentsQuantity < 10 || studentsQuantity > 100) {
        printf("Numero incorreto de estudantes (10/100)\n");
        return 1;
    }

    printf("Escolha a opcao:\n");
    printf("1 - Informar todas as notas manualmentes\n");
    printf("2 - Gerar automaticamente\n");
    scanf("%d", &option);

    float grades[studentsQuantity];

    if (option == 1) {
        fillGrades(grades, studentsQuantity);
    } else if (option == 2) {
        generateRandomGrades(grades, studentsQuantity);
    } else {
        printf("Opcao invalida\n");
        return 1;
    }

    displayGrades(grades, studentsQuantity);

    float highestGrade = findHighestGrade(grades, studentsQuantity);
    float lowestGrade = findLowestGrade(grades, studentsQuantity);

    printf("Nota mais alta: %.2f\n", highestGrade);
    printf("Nota mais baixa: %.2f\n", lowestGrade);

    float average = calculateAverage(grades, studentsQuantity);
    printf("Media: %.2f\n", average);

    int aboveAverage = 0, belowAverage = 0, atAverage = 0;
    for (int i = 0; i < studentsQuantity; i++) {
        if (grades[i] > average) {
            aboveAverage++;
        } else if (grades[i] < average) {
            belowAverage++;
        } else {
            atAverage++;
        }
    }

    printf("Quantidade de estudantes acima da media: %d\n", aboveAverage);
    printf("Quantidade de estudantes abaixo da media: %d\n", belowAverage);
    printf("Quantidade de estudantes na media: %d\n", atAverage);

    float variance = calculateVariance(grades, studentsQuantity, average);
    float standardDeviation = calculateStandardDeviation(variance);

    printf("Variancia: %.2f\n", variance);
    printf("Desvio padrao: %.2f\n", standardDeviation);

    return 0;
}
