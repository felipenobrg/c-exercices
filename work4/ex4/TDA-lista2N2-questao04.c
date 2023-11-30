#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
** Função: Programa gerencia o estoque de um mercado
** Autor: Felipe Nóbrega
** Data 30/11:
** Observações:
*/

struct Produto {
    int codigo;
    char nome[15];
    float preco;
    int quantidade;
};

struct Produto* buscarProduto(int codigo, struct Produto produtos[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (produtos[i].codigo == codigo) {
            return &produtos[i];
        }
    }
    return NULL;
}

int main() {
    int n;
    printf("Digite o número de produtos: ");
    scanf("%d", &n);


    struct Produto produtos[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o código do produto: ");
        scanf("%d", &produtos[i].codigo);

        printf("Digite o nome do produto (até 15 letras): ");
        scanf("%s", produtos[i].nome);

        printf("Digite o preço do produto: ");
        scanf("%f", &produtos[i].preco);

        printf("Digite a quantidade em estoque: ");
        scanf("%d", &produtos[i].quantidade);
    }

    while (1) {
        int codigoPedido;
        printf("Digite o código do produto do pedido (ou 0 para sair): ");
        scanf("%d", &codigoPedido);

        if (codigoPedido == 0) {
            break;
        }

        int quantidadePedido;
        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidadePedido);

        struct Produto* produto = buscarProduto(codigoPedido, produtos, n);

        if (produto != NULL) {
            if (quantidadePedido <= produto->quantidade) {
                produto->quantidade -= quantidadePedido;
                printf("Pedido realizado com sucesso!\n");
            } else {
                printf("Quantidade insuficiente em estoque.\n");
            }
        } else {
            printf("Produto não encontrado.\n");
        }
    }

    return 0;
}