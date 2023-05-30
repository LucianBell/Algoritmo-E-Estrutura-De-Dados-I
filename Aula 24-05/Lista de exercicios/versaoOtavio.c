#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10];
    int maiorNumero, loop1, loop2;
    maiorNumero = 0;

    printf("Insira dez números \n");
    for (loop1 = 0; loop1 < 10; loop1++) {
        scanf("%d", &numeros[loop1]);
    }

    for (loop2 = 0; loop2 < 10; loop2++) {
        if (maiorNumero < numeros[loop2]) {
            maiorNumero = numeros[loop2];
        }
    }
    
    printf("Maior número: %d", maiorNumero);

    return 0;
}
