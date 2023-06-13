/*
Faça um algoritmo que leia um número inteiro. Se este valor for positivo, calcule e mostre o seu
fatorial.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, controle = 0, fatorial;

    printf("Insira um número: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Número inválido, o número deve ser positivo.");
    } else {
        fatorial = num;
        controle = num;
        while (controle > 1)
        {
            fatorial *= (controle - 1);
            controle--; 
        }
        
        printf("O valor inserido (%d) tem a fatorial %d", num, fatorial);
    }
    
    return 0;
}
