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
    int ctrl = 0;

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


    return 0;
}
