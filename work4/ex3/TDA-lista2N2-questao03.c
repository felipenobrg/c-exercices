#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
** Função: Programa armazena dados de um RG e define um vetor de empregados 
usando alocação dinâmica
** Autor: Felipe Nóbrega
** Data 30/11:
** Observações:
*/

struct empregado {
    char nome[50];
    char dataNascimento[11];
    char rg[12];
    char dataAdmissao[11]; 
    float salario;
};

typedef struct empregado Empregado;

void lerEmpregado(Empregado *e) {
    printf("Digite o nome do empregado: ");
    scanf("%s", e->nome);

    printf("Digite a data de nascimento (DD/MM/AAAA): ");
    scanf("%s", e->dataNascimento);

    printf("Digite o RG: ");
    scanf("%s", e->rg);

    printf("Digite a data de admissao (DD/MM/AAAA): ");
    scanf("%s", e->dataAdmissao);

    printf("Digite o salario: ");
    scanf("%f", &e->salario);
}

void escreverEmpregado(Empregado *e) {
    printf("Nome: %s\n", e->nome);
    printf("Data de Nascimento: %s\n", e->dataNascimento);
    printf("RG: %s\n", e->rg);
    printf("Data de Admissao: %s\n", e->dataAdmissao);
    printf("Salario: %.2f\n", e->salario);
}

void excluirEmpregado(Empregado *e); 

int main() {
    int numEmpregados;
    printf("Digite o número de empregados: ");
    scanf("%d", &numEmpregados);

    Empregado *empregados = (Empregado *)malloc(numEmpregados * sizeof(Empregado));

    for (int i = 0; i < numEmpregados; i++) {
        lerEmpregado(&empregados[i]);
    }
      printf("\nInformações dos Empregados:\n");
    for (int i = 0; i < numEmpregados; i++) {
        escreverEmpregado(&empregados[i]);
    }

    for (int i = 0; i < numEmpregados; i++) {
        excluirEmpregado(&empregados[i]);
    }
    free(empregados);

    return 0;
}
