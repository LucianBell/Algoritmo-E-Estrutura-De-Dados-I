//1)   Faça um algoritmo que leia um número inteiro. Logo após verifique e mostre se o valor lido é um número “primo” ou “não”.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, totalDivisores, ctrl;
    totalDivisores = 1;
    ctrl = 0;

    printf("Insira um número: ");
    scanf("%d", &num);

    //2, 3, 5, 7
    while (ctrl < (num - 1))
    {
        ctrl++;

        if (num % ctrl == 0) {
            totalDivisores++;
        } else if (totalDivisores > 2) {
            break;
        }
    }
    
    if (totalDivisores > 2) {
        printf("Não é primo.");
    } else {
        printf("É primo");
    }

    return 0;
}
