/*
3) Escreva um algoritmo que imprima as seguintes sequências de números: (1, 1 2 3 4 5 6 7 8 9 10) 
(2, 1 2 3 4 5 6 7 8 9 10) (3, 1 2 3 4 5 6 7 8 9 10) (4, 1 2 3 4 5 6 7 8 9 10) e assim sucessivamente, 
até que o primeiro número (antes da vírgula), também chegue a 10.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numInicial = 1;
    char sequenciaPadrao[] = "1 2 3 4 5 6 7 8 9 10";

    while (numInicial <= 10)
    {
        printf("(%d, %s)\n",numInicial, sequenciaPadrao);
        numInicial++;
    }
    printf("Finalizando programa...");

    return 0;
}
