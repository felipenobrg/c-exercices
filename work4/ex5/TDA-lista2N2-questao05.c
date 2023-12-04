#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
** Função: Programa ler dado das bandas favoritas do usuário 
e aloca dinamicamente
** Autor: Felipe Nóbrega
** Data 30/11:
** Observações:
*/

struct Banda {
    char nome[50];
    char tipoMusica[30];
    int numIntegrantes;
    int ranking;
};

typedef struct Banda BandaMusica;

void lerBanda(BandaMusica *banda) {
    printf("Digite o nome da banda: ");
    scanf("%s", banda->nome);

    printf("Digite o tipo de musica da banda: ");
    scanf("%s", banda->tipoMusica);

    printf("Digite o numero de integrantes da banda: ");
    scanf("%d", &banda->numIntegrantes);

    printf("Digite a posicao da banda no ranking (1 a 5): ");
    scanf("%d", &banda->ranking);
}

void escreverBanda(BandaMusica banda) {
    printf("Nome da Banda: %s\n", banda.nome);
    printf("Tipo de Musica: %s\n", banda.tipoMusica);
    printf("Numero de Integrantes: %d\n", banda.numIntegrantes);
    printf("Posição no Ranking: %d\n", banda.ranking);
    printf("\n");
}

int main() {
    int n;

    printf("Digite o numero de bandas preferidas: ");
    scanf("%d", &n);

    BandaMusica *bandas = (BandaMusica *)malloc(n * sizeof(BandaMusica));

    for (int i = 0; i < n; i++) {
        lerBanda(&bandas[i]);
    }

    printf("Bandas Preferidas\n");
    for (int i = 0; i < n; i++) {
        escreverBanda(bandas[i]);
    }

    free(bandas);

    return 0;
}