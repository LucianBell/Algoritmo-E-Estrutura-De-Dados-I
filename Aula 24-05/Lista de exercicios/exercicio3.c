//3. Escreva um algoritmo que, dados cem números, informe qual a diferença entre o menor valor lido e o maior.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entradas, menor, maior, atual;
    entradas = 2;

    printf("Insira um numero: ");
    scanf("%d", &maior);
    menor = maior;

    while (entradas <= 100)
    {
        printf("Insira um numero: ");
        scanf("%d", &atual);
        if (atual > maior) {
            maior = atual;
        } else if (atual < menor){
            menor = atual;
        }
        entradas++;
    }
    
    printf("A diferença entre o maior número (%d), e o menor número (%d), é %d", maior, menor, (maior - menor));

    return 0;
}
