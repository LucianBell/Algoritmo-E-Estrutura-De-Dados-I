/*
6) Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço. 
O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser feito com grãos de trigo 
dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal forma que o primeiro quadro deveria conter 
apenas um grão e os quadros subsequentes, o dobro do quadro anterior. A rainha considerou o pagamento 
barato e pediu que o serviço fosse executado, sem se dar conta de que seria impossível efetuar o pagamento. 
Faça um algoritmo para calcular o número de grãos que o monge esperava receber.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quadroAtual;
    long long graos, graosAtual;
    quadroAtual = 0;
    graos = 0;
    graosAtual = 1;

    while (quadroAtual < 64)
    {
        graos += graosAtual;
        graosAtual *= 2;
        quadroAtual++;
    }
    
    printf("O monge esperava receber %llu grãos\n", graos);

    return 0;
}
