/*
6)   
Elabore um algoritmo que, dada uma
quantidade indeterminada de números inteiros e positivos, um de cada vez, faça
o seguinte: se o número for par, verificar quantos divisores possui e escrever
esta informação; se o número for ímpar e menor do que 12, calcular e escrever
seu fatorial; se o número for ímpar e maior ou igual a 12, calcular e escrever
a soma dos inteiros de 1 até o número.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int num, divisores, ctrl, fatorial, soma;
    char respostaUsuario = 's';
    divisores = 0;
    ctrl = 0;
    fatorial = 0;
    soma = 0;

    while (respostaUsuario != 'N') {
        printf("Insira um número: ");
        scanf("%d", &num);

        if (num % 2 == 0 && num != 12) {
            while (ctrl < num)
            {
                ctrl++;
                if (num % ctrl == 0) {
                    divisores++;
                }
            }
            printf("O total de divisores de %d é %d\n", num, divisores);
            ctrl = 0;
            divisores = 0;
        } else if (num < 12) {
            ctrl = (num - 1);
            fatorial = num * ctrl;
            while (ctrl != 1)
            {
                ctrl--;
                fatorial = fatorial * ctrl;
            }
            printf("A fatorial de %d é %d\n", num, fatorial);   
            ctrl = 0;
            fatorial = 0;
        } else {
            while (ctrl <= num)
            {
                soma += ctrl;
                ctrl++;
            }
            printf("A soma dos inteiros, de 1 até %d, é igual a %d\n", num, soma);
            soma = 0;
            ctrl = 0;
        }
        printf("Deseja continuar? Digite N para parar o programa, ou qualquer outra tecla para continuar: ");
        fflush(stdin);
        scanf("%c", &respostaUsuario);
        toupper(respostaUsuario);
    }
    
    return 0;
}
