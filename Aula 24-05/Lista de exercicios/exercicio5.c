//5. Escreva um algoritmo que, dada uma quantidade indeterminada de pares de números, um par de cada vez, mostre o maior valor de cada par. O algoritmo deve terminar o processamento quando for informado um par de zeros, para os quais não deverá ser mostrado nada.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int par1, par2;
    par1 = 1;
    par2 = 2;

    printf("Para sair do programa, responda 0 nas duas perguntas\n");

    while (par1 != 0 && par2 != 0)
    {
        printf("Insira o primeiro número do par: ");
        scanf("%d", &par1);

        printf("Insira o segundo número do par: ");
        scanf("%d", &par2);

        if (par1 > par2) {
            printf("Maior número do par: %d\n", par1);
        } else if (par2 > par1) {
            printf("Maior número do par: %d\n", par2);
        } else if (par1 == 0 && par2 == 0) {
            printf("Finalizando programa...");
        }
    }
    
    return 0;
}
