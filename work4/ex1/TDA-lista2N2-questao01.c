#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
** Função: Programa recebe dados e define em uma variável chamada perfil_saude, 
e retorna idade atual do usuário em anos, a frequência
** Autor: Felipe Nóbrega
cardíaca máxima e a frequência cardíaca ideal fazendo o cálculo correto caso a pessoa
seja homem ou mulher.
** Data 28/11:
** Observações:
*/


struct DataNascimento {
    int dia;
    int mes;
    int ano;
};

struct PerfilSaude {
    char nomeCompleto[80];
    char sexo;
    struct DataNascimento dataNascimento;
    float altura;
    float peso;
};

int calcularIdade(struct DataNascimento dataNascimento) {
    int idade = 2023 - dataNascimento.ano;
    if (dataNascimento.mes > 11 || (dataNascimento.mes == 11 && dataNascimento.dia > 28)) {
        idade--;
    }
    return idade;
}

float calcularIMC(struct PerfilSaude perfil) {
    return perfil.peso / (perfil.altura * perfil.altura);
}

int calcularFrequenciaCardiacaMaxima(int idade) {
    return 220 - idade;
}

void calcularFrequenciaCardiacaIdeal(struct PerfilSaude perfil, double *minFrequencia, double *maxFrequencia) {
    if (perfil.sexo == 'M' || perfil.sexo == 'm') {
        *minFrequencia = 0.5 * calcularFrequenciaCardiacaMaxima(calcularIdade(perfil.dataNascimento));
        *maxFrequencia = 0.85 * calcularFrequenciaCardiacaMaxima(calcularIdade(perfil.dataNascimento));
    } else if (perfil.sexo == 'F' || perfil.sexo == 'f') {
        *minFrequencia = 0.55 * calcularFrequenciaCardiacaMaxima(calcularIdade(perfil.dataNascimento));
        *maxFrequencia = 0.8 * calcularFrequenciaCardiacaMaxima(calcularIdade(perfil.dataNascimento));
    }
}

int calcularExpectativaVida(char sexo) {
    if (sexo == 'M' || sexo == 'm') {
        return 75;
    } else if (sexo == 'F' || sexo == 'f') {
        return 80;
    }
    return 0;
}

void exibirTabelaIMC() {
    printf("\nTabela de Valores do IMC:\n");
    printf("Abaixo do Peso: Menos de 18.5\n");
    printf("Normal: 18.5 - 24.9\n");
    printf("Sobrepeso: 25 - 29.9\n");
    printf("Obesidade Grau I: 30 - 34.9\n");
    printf("Obesidade Grau II: 35 - 39.9\n");
    printf("Obesidade Grau III: 40 ou mais\n");
}

int main() {
    int N;
    int i;
       
    printf("Informe a quantidade de perfis de saude: ");
    scanf("%d", &N);

    struct PerfilSaude *perfis = (struct PerfilSaude *)malloc(N * sizeof(struct PerfilSaude));


    for (i = 0; i < N; i++) {
        printf("\nInforme os dados para o perfil de saude #%d:\n", i + 1);

        printf("Nome Completo: ");
        fgets(perfis[i].nomeCompleto, sizeof(perfis[i].nomeCompleto), stdin);
        perfis[i].nomeCompleto[strcspn(perfis[i].nomeCompleto, "\n")] = 0; // Remove trailing newline

        printf("Sexo (M/F): ");
        scanf(" %c", &perfis[i].sexo);

        printf("Data de Nascimento (DD MM AAAA): ");
        scanf("%d %d %d", &perfis[i].dataNascimento.dia, &perfis[i].dataNascimento.mes, &perfis[i].dataNascimento.ano);

        printf("Altura (em metros): ");
        scanf("%f", &perfis[i].altura);

        printf("Peso (em quilogramas): ");
        scanf("%f", &perfis[i].peso);
    }

    for (i = 0; i < N; i++) {
        printf("\nInformacoes para o perfil de saude #%d:\n", i + 1);
        printf("Nome: %s\n", perfis[i].nomeCompleto);

        int idade = calcularIdade(perfis[i].dataNascimento);
        printf("Idade: %d anos\n", idade);

        float imc = calcularIMC(perfis[i]);
        printf("IMC: %.2f\n", imc);

        int frequenciaCardiacaMaxima = calcularFrequenciaCardiacaMaxima(idade);
        printf("Frequencia Cardiaca Maxima: %d bpm\n", frequenciaCardiacaMaxima);

        double minFrequencia, maxFrequencia;
        calcularFrequenciaCardiacaIdeal(perfis[i], &minFrequencia, &maxFrequencia);
        printf("Frequencia Cardiaca Ideal: %lf a %lf bpm\n", minFrequencia, maxFrequencia);

        int expectativaVida = calcularExpectativaVida(perfis[i].sexo);
        int anosRestantes = expectativaVida - idade;
        printf("Expectativa de Vida Restante: %d anos\n", anosRestantes);
    }

    exibirTabelaIMC();
    free(perfis);

    return 0;
}
