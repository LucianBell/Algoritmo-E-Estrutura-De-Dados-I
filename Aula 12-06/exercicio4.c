/*Faça um algoritmo que leia dois vetores de caracteres de tamanho 5 cada. Logo após verifique e
mostre o vetor que possui mais vogais armazenadas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Array1[5], Array2[5], ArrayVogais[5] = {'a', 'e', 'i', 'o', 'u'};
    int controle = 0, vogal1=0, vogal2=0;

    printf("Insira os caracteres do primeiro array\n");
    
    while (controle < 5)
    {
        fflush(stdin);
        scanf("%c", &Array1[controle]);
        if (Array1[controle] == ArrayVogais[0] || Array1[controle] == ArrayVogais[1] || Array1[controle] == ArrayVogais[2] || Array1[controle] == ArrayVogais[3] || Array1[controle] == ArrayVogais[4]) {
            vogal1++;
        }
        controle++;
    }

    controle = 0;
    printf("Insira os caracteres do segundo array\n");
    
    while (controle < 5)
    {
        fflush(stdin);
        scanf("%c", &Array2[controle]);
        if (Array2[controle] == ArrayVogais[0] || Array1[controle] == ArrayVogais[1] || Array1[controle] == ArrayVogais[2] || Array1[controle] == ArrayVogais[3] || Array1[controle] == ArrayVogais[4]) {
            vogal2++;
        }
        controle++;
    }
    
    controle = 0;

    if (vogal1 > vogal2)
    {
        printf("Array com mais vogal é a primeira array: [");
        while (controle < 5)
        {
            if (controle < 4) {
                printf("%c, ", Array1[controle]);
            } else {
                printf("%c", Array1[controle]);
            }
            controle++;
        }
        printf("]");
    }
    else
    {
        printf("Array com mais vogal é a segunda array: [");
        while (controle < 5)
        {
            if (controle < 4) {
                printf("%c, ", Array2[controle]);
            } else {
                printf("%c", Array2[controle]);
            }
            controle++;
        }
        printf("]");
    }
    

    return 0;
}
