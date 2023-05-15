// 4. João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o
// rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido
// pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por
// quilo excedente. João precisa que você faça um algoritmo que leia uma variável p (peso de peixes) e
// verifique se há excesso. Se houver, gravar na variável e (excesso) e na variável m o valor da que João
// deverá pagar. Caso contrário, mostrar tais variáveis com o conteúdo zero.

#include <stdio.h>

int main()
{
    int p, e; 
    float m;

    printf("Insert the total weight collected: ");
    scanf("%d", &p);

    if (p <= 50) {
        printf("The total collected was %d, with %d kilos above the limit and with R$ %.2f of fine\n", p, e, m);
    } else {
        e = p - 50;
        m = e * 4.00;
        printf("The total collected was %d, with %d kilos above the limit and with R$ %.2f of fine\n", p, e, m);
    }

    return 0;
}
