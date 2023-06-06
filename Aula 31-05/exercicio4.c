/*
4)   
Escreva um algoritmo que gere a
tabuada a partir de um número informado pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, ctrl;
    ctrl = 1;

    printf("Insira um número para ver sua tabuada: ");
    scanf("%d", &num);

    while (ctrl <= 10)
    {
        printf("%d x %d = %d\n", ctrl, num, (num * ctrl));
        ctrl++;
    }

    return 0;
}
