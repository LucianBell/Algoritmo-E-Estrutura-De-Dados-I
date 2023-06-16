/*
Faça um algoritmo que leia dois vetores A e B, com vinte caracteres cada. A seguir, troque o 1o
elemento de A com o 20o elemento de B, o 2o de A com o 19o de B, e assim por diante, até trocar o
20o de A com o 1o de B. Mostre os vetores antes e depois das trocas realizadas. Exemplo:
    Vetor A (antes da troca)
    A G Y W 5 V S 8 6 J G A W 2 M C H Q 6 L
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    Vetor B (antes da troca)
    S D 4 5 H G R U 8 9 K S A 1 2 V 4 D 5 M
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    Vetor A (depois da troca)
    M 5 D 4 V 2 1 A S K 9 8 U R G H 5 4 D 2
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
    Vetor B (depois da troca)
    L 6 Q H C M 2 W A G J 6 8 S V 5 W Y G A
    0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arrayA[5], arrayB[5], arrayAuxiliar[5];
    int controle = 0, controle1 = 5;

    printf("Insira os valores do primeiro array:\n");

    while (controle < 5)
    {
        fflush(stdin);
        scanf("%c", &arrayA[controle]);
        controle++;
    }
    
    controle = 0;

    printf("Insira os valores do segundo array:\n");

    while (controle < 5)
    {
        fflush(stdin);
        scanf("%c", &arrayB[controle]);
        controle++;
    }

    controle = 0;

    printf("Vetor/Array A (antes da troca):\n");
    while (controle < 5)
    {
        printf("%c ", arrayA[controle]);
        controle++;
    }

    printf("\n");
    controle = 0;

    printf("Vetor/Array B (antes da troca):\n");
    while (controle < 5)
    {
        printf("%c ", arrayB[controle]);
        controle++;
    }

    controle = 0;

    //Parte 2

    while (controle < 5)
    {
        arrayAuxiliar[controle] = arrayA[controle];
        controle++;
    }
    
    controle = 0;

    while (controle < 5)
    {
        arrayA[controle] = arrayB[controle]; 
        controle++;
    }
    
    controle = 0;

    while (controle < 5)
    {
        arrayB[controle] = arrayAuxiliar[controle];
        controle++;
    }

    //Parte 3

    printf("\n");
    controle = 0;

    printf("Vetor/Array A (depois da troca):\n");
    while (controle < 5)
    {
        printf("%c ", arrayA[controle]);
        controle++;
    }

    printf("\n");
    controle = 0;

    printf("Vetor/Array B (depois da troca):\n");
    while (controle < 5)
    {
        printf("%c ", arrayB[controle]);
        controle++;
    }
    

    return 0;
}
