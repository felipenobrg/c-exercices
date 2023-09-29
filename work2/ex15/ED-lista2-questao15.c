#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
/*
** Função: Simula pedra, papel e tesoura.
 Interagindo entre escolha aleatória do computador e usuário.
** Autor: Felipe Nóbrega de Almeida
** Data: 28/09
** Observações:
*/
{
  int user, computer;

    srand(time(NULL));

    computer = rand() % 3;

    printf("Escolha uma opcao:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    scanf("%d", &user);

    if (user == computer) {
        printf("Empate!\n");
    } else if ((user == 0 && computer == 2) || (user == 1 && computer == 0) || (user == 2 && computer == 1)) {
        printf("Voce ganhou!\n");
    } else {
        printf("O computador ganhou !\n");
    }

    return 0;
}