//2. Elabore um algoritmo que leia 10 (dez) números  e encontre e mostre o maior valor informado.


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entradas, atual, maior;
    entradas = 0;
    atual = 0;

    printf("Insira um número: ");
    scanf("%d", &maior);

    while (entradas < 9)
    {
        printf("Insira um número: ");
        scanf("%d", &atual);
        if (atual > maior) {
            maior = atual;
        }
        entradas++;
    }
    
    printf("Maior número: %d", maior);
    return 0;
}
