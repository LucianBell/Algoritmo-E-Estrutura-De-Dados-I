/*
Faça um algoritmo que leia um vetor F[20] e uma variável A. A seguir, crie um vetor G[20] que é o
produto da variável A pelo vetor F. Mostre o vetor G no final.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arrayF[5], arrayG[5];
    int varA, controle = 0;

    printf("Insira os valores para a array F\n");

    while (controle < 5)
    {
        scanf("%d", &arrayF[controle]);
        controle++;
    }

    printf("Agora insira a var A: ");
    scanf("%d", &varA);

    controle = 0;

    while (controle < 5)
    {
        arrayG[controle] = (varA * arrayF[controle]);
        controle++;
    }

    controle = 0;

    printf("O array G é igual a: [");
    while (controle < 5)
    {
        if (controle < 4) {
        printf("%d, ", arrayG[controle]);
        } else {
            printf("%d", arrayG[controle]);
        }
        controle++;
    }
    printf("]");

    return 0;
}
