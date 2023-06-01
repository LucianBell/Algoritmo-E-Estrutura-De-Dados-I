/*
7)   
Existem números de 4 dígitos (entre
1000 e 9999) que obedecem à seguinte característica: se dividirmos o número em
dois números de dois dígitos, um composto pela dezena e pela unidade, e outro
pelo milhar e pela centena, somarmos estes dois novos números gerando um
terceiro, o quadrado deste terceiro número é exatamente o número original de
quatro dígitos. Por exemplo: 2025   
-> dividindo: 20 e 25 -> somando temos 45 ->    452 = 2025. Escreva um programa para calcular
todos os números que obedecem a esta característica.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, primeirosDig, ultimosDig, quadrado, controle;
    controle = 1000;

    while (controle <= 9999)
    {
        primeirosDig = controle / 100;
        ultimosDig = controle % 100;

        quadrado = primeirosDig + ultimosDig;

        if (quadrado * quadrado == controle) {
            printf("%d obedece a regra.\n", controle);
        }
        controle++;
    }
    

    return 0;
}
