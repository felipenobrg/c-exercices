#include <stdio.h>

int main() {
    float weight, height, bmi;
    printf("Digite seu peso em KG: ");
    scanf("%f", &weight);

    printf("Digite sua altura em M: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("IMC: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Abaixo do peso\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("Peso normal\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("Sobrepeso\n");
    } else if (bmi >= 30.0 && bmi <= 34.9) {
        printf("Obesidade grau 1\n");
    } else if (bmi >= 35.0 && bmi <= 39.9) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }

    return 0;
}
