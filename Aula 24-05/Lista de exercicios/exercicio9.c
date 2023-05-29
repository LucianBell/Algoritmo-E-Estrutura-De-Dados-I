//9. Escreva um algoritmo que a partir de uma senha fixa, pré-determinada no código fonte, receba do usuário entradas para validar a senha. Caso o usuário não acerte a senha em até três tentativas, o algoritmo deverá mostrar uma mensagem de que o cartão foi bloqueado. Considere que a senha deverá ser armazenada e manipulada como um valor inteiro.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha, tentativas, entrada;
    senha = 1234;
    tentativas = 0;

    while (tentativas < 3) {
        printf("Insira a senha: ");
        scanf("%d", &entrada);

        if (entrada == senha) {
            printf("Cartão liberado para uso!\n");
            break;
        } else {
            printf("Senha incorreta!\n");
        }

        tentativas++;
    }

    if (tentativas == 3) {
        printf("Cartão bloqueado!\n");
    }

    return 0;
}
