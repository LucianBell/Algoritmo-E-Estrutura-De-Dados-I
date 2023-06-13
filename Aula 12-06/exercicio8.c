/*
Faça um programa que preencha (leia) dois vetores de dez números inteiros cada ume logo após
mostre o vetor resultante da “intercalação” dos dois vetores lidos. Observe o seguinte exemplo:
    Vetor A
        3 5 4 2 2 5 3 2 5 9
        0 1 2 3 4 5 6 7 8 9
    Vetor B
        7 15 20 0 18 4 55 23 8 6
        0 1 2 3 4 5 6 7 8 9
    Vetor C resultante da intercalação
        3 7 5 15 4 20 2 0 2 18 5 4 3 55 2 23 5 8 9 6
        0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int vetorA[10], vetorB[10], vetorC[20];
    int controle = 0, controle1 = 0;

    printf("Insira 10 valores para o vetor A\n");
    while (controle < 10)
    {
        scanf("%d", &vetorA[controle]);
        controle++;
    }
    controle = 0;

    printf("Insira 10 valores para o vetor B\n");
    while (controle < 10)
    {
        scanf("%d", &vetorB[controle]);
        controle++;
    }
    controle = 0;

    while (controle < 20)
    {
        if (controle < 10) {
            vetorC[controle] = vetorA[controle];
        } else {
            vetorC[controle] = vetorB[controle1];
            controle1++;
        }
        controle++;
    }
    controle = 0;

    printf("Seu vetor C é:\n");
    
    while (controle < 20)
    {
        printf("%d", vetorC[controle]);
        printf(" ");
        controle++;
    }   

    return 0;
}
