//6. Escreva um algoritmo que leia um número inteiro e, se ele for maior do que zero, escreva o valor da
//soma de todos os números inteiros entre zero e esse número.

#include <stdio.h>

int main()
{
    int n1, con, soma;

    printf("Insert the number: ");
    scanf("%d", &n1);

    if (n1 < 0 || n1 == 0) {
        printf("Ending program...");
    } else {
        con = 1;

        while (con <= n1)
        {
            soma = soma + (con);
            con++;
        }
        printf("The sum of all the numbers between 0 and %d is %d", n1, soma);
    }

    return 0;
}
