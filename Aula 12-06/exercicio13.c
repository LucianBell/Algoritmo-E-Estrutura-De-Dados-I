/*
Faça um algoritmo que leia um vetor S[20] e o escreva. A seguir, compacte este vetor S, retirando
todos os valores nulos ou negativos e mostre então o vetor compactado
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorS[20];
    int controle = 0;

    printf("Insira os valores para o vetor\n");
    while (controle < 20)
    {
        scanf("%d", &vetorS[controle]);
        controle++;
    }
    controle = 0;

    printf("O seu vetor completo é:\n");
    while (controle < 20)
    {
        printf("%d", vetorS[controle]);
        printf(" ");
        controle++;
    }
    printf("\n");
    controle = 0;

    printf("Realizando compactação...\n");
    printf("Seu vetor compactado é: \n");

    while (controle < 20)
    {
        if (vetorS[controle] <= 0) {
            printf("");
        } else {
            printf("%d ", vetorS[controle]);
        }
        controle++;
    }
    
    

    return 0;
}
