/*
    2) Um número inteiro é dito perfeito se o dobro dele é igual à soma de todos os seus divisores. 
    Por exemplo, como os divisores de 6 são 1, 2, 3 e 6 e 1 + 2 + 3 + 6 = 12, 6 é perfeito. 
    A matemática ainda não sabe se a quantidade de números perfeitos é ou não finita. 
    Escreva um programa que liste todos os números perfeitos menores que um inteiro n dado.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numFinal, dobroNum, controle, controle2, somaDivisores;

    controle = 1;

    printf("Insira um valor: ");
    scanf("%d", &numFinal);

    while (controle <= numFinal)
    {
        dobroNum = (controle + controle);

        somaDivisores = 0;
        controle2 = 1;
        while (controle2 <= controle)
        {
            if (controle % controle2 == 0) {
                somaDivisores += controle2;
            }
            controle2++;
        }
        
        if (somaDivisores == dobroNum)
        {
            printf("%d é um número perfeito\n", controle);
        }
        
        controle++;
    }
    

    return 0;
}
