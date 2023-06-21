/*
Faça um algoritmo que leia um vetor com 8(oito) números inteiros, calcule e mostre dois vetores
resultantes. O primeiro vetor deve conter os números positivos; o segundo deve conter os números
negativos. Cada vetor resultante vai ter, no máximo, oito posições, que poderão não ser
completamente utilizadas. Caso um dos vetores resultantes (de negativos ou de positivos) não possua
elementos, uma mensagem deverá ser exibida. (Por exemplo: “vetor de negativos vazio” e/ou “vetor
de positivos vazio”).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetorA[8], vetorB[8], vetorC[8];
    int ctrl = 0, ctrl1 = 0, ctrl2 = 0;

    printf("Insira os valores do vetor A\n");
    
    while (ctrl < 8) {
        scanf("%d", &vetorA[ctrl]);
        ctrl++;
    } 

    ctrl = 0;
    printf("Vetor original: ");

    while (ctrl < 8)
    {
        printf("%d ", vetorA[ctrl]);
        ctrl++;
    }
    
    ctrl = 0;

    while (ctrl < 8)
    {
        if (vetorA[ctrl] >= 0) {
            vetorB[ctrl1] = vetorA[ctrl];
            ctrl1++;
        } else {
            vetorC[ctrl2] = vetorA[ctrl];
            ctrl2++;
        }
        ctrl++;
    }

    ctrl = 0;
    printf("\n");

    if (ctrl1 < 1) {
        printf("Vetor de positivos (vetor B) vazio");
    } else {
        printf("Vetor B (valores positivos): ");
        while (ctrl < ctrl1)
        {
            printf("%d ", vetorB[ctrl]);
            ctrl++;
        }
    }

    ctrl = 0;

    printf("\n");
    if (ctrl2 < 1) {
        printf("Vetor de negativos (vetor C) vazio\n");        
    } else {
        printf("Vetor C (valores positivos): ");
        while (ctrl < ctrl2)
        {
            printf("%d ", vetorC[ctrl]);
            ctrl++;
        }    

    }

    return 0;
}
