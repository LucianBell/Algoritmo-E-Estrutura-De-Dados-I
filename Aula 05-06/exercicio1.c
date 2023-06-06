/*
1) Faça um programa que leia um valor inteiro X indefinidas vezes. 
(O programa irá parar quando o valor de X for igual a 0). 
Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive, se X for par. 
Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação: 4+6+8+10+12, 
enquanto que se o valor de entrada for 11, por exemplo, a saída deve ser 80, que é a soma de 12+14+16+18+20.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, controle, asomar, resultado;
    num = -1;
    controle = 0;
    asomar = 0;
    resultado = 0;

    while (num != 0)
    {
        printf("Insira um valor, ou 0 para sair: ");
        scanf("%d", &num);

        if (num == 0) {
            printf("Obrigado por utilizar meu programa :D\n");
        }
        else if (num % 2 == 0) {
            resultado = num;
            controle = 1;
            asomar = num;
            while(controle < 5) {
                asomar++;
                if(asomar % 2 == 0) {
                    resultado += asomar;
                    controle++;
                }
            }
            printf("Resultado: %d\n", resultado);
        } else {
            resultado = 0;
            controle = 0;
            asomar = num;
            while(controle < 5) {
                asomar++;
                if(asomar % 2 == 0) {
                    resultado += asomar;
                    controle++;
                }
            }
            printf("Resultado: %d\n", resultado);
        }
    }
    return 0;
}
