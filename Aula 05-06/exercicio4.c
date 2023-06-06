/*
4) Faça um algoritmo que leia um número n que indica quantos valores devem ser lidos a seguir.
Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numsALer, num, controle, controle1, fatorial;

    printf("Insira quantos valores você vai informar: ");
    scanf("%d", &numsALer);

    controle = 0;

    while (controle < numsALer)
    {
        printf("Insira o valor desejado: ");
        scanf("%d", &num);
        controle1 = (num - 1);
        fatorial = num;
        while (controle1 != 1)
        {
            fatorial = (fatorial * (controle1));
            controle1--;
        }
        printf("**********************\n");
        printf("*NUMERO******FATORIAL*\n");
        printf("**********************\n");
        printf("*  %d     *     %d   *\n", num, fatorial);
        printf("**********************\n");
        controle++;
    }
    printf("Finalizando programa...");

    return 0;
}
