#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
** Função: Programa armazena todos aeroportos
** Autor: Felipe Nóbrega
** Data 29/11:
** Observações:
*/

struct aeroporto {
    char sigla[4];
    char cidade[51];
    char pais[31];
    float taxa;
    int capacidade;
};

typedef struct aeroporto Aeroporto;

void lerAeroporto(Aeroporto *a) {
    printf("Digite a sigla (ate 3 caracteres): ");
    scanf("%3s", a->sigla);

    printf("Digite a cidade (ate 50 caracteres): ");
    scanf("%50s", a->cidade);

    printf("Digite o pais (ate 30 caracteres): ");
    scanf("%30s", a->pais);

    printf("Digite a taxa: ");
    scanf("%f", &a->taxa);

    printf("Digite a capacidade: ");
    scanf("%d", &a->capacidade);
}

void escreverAeroporto(Aeroporto *a) {
    printf("Sigla: %s\n", a->sigla);
    printf("Cidade: %s\n", a->cidade);
    printf("Pais: %s\n", a->pais);
    printf("Taxa: %.2f\n", a->taxa);
    printf("Capacidade: %d\n", a->capacidade);
}

void excluirAeroporto(Aeroporto *a) {

}

int main() {
    int numAeroportos;
    printf("Digite o numero de aeroportos: ");
    scanf("%d", &numAeroportos);


    Aeroporto *aeroportos = (Aeroporto *)malloc(numAeroportos * sizeof(Aeroporto));

    for (int i = 0; i < numAeroportos; i++) {
        printf("\nAeroporto");
        lerAeroporto(&aeroportos[i]);
    }


    printf("\nInformacoes dos Aeroportos:\n");
    for (int i = 0; i < numAeroportos; i++) {
        printf("\nAeroporto");
        escreverAeroporto(&aeroportos[i]);
    }

    for (int i = 0; i < numAeroportos; i++) {
        excluirAeroporto(&aeroportos[i]);
    }
    free(aeroportos);

    return 0;
}