//4. Escreva um algoritmo que escreva cinquenta números ímpares, começando com o valor 101.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int saidas, atual;
    saidas = 0;
    atual = 101;

    while (saidas <= 50)
    {
        printf("Valor atual: %d\n", atual);
        atual = atual + 2;
        saidas++;
    }
    
    printf("Finalizando programa");

    return 0;
}
