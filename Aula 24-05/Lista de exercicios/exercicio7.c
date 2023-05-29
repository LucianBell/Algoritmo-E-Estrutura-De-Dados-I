/*
7. O cardápio de uma casa de lanches é dado pela tabela abaixo:
Código                Descrição                  Preço
100                      cachorro quente       10,70
101                      bauru simples           12,30
102                      bauru com ovo          22,60
103                      hamburguer               12,40
104                      cheese burguer          19,50
105                      refrigerante                 5,00
Elabore um algoritmo que, dados os códigos do itens adquiridos por um consumidor e as quantidades correspondentes, calcule e mostre o valor a pagar. O final da entrada do pedido é sinalizado com um código zero.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, ctrl;
    float quant, valor;
    valor = 0;
    cod = 1;

    printf("Seja bem-vindo ao Lucy's Lanches! Faça seu pedido e, ao final, envie zero para finalizar.\n");

    while (cod != 0)
    {
        printf("Qual seu pedido?\n");
        scanf("%d",&cod);

        if (cod == 100) {
            printf("Perfeito! e qual a quantidade? ");
            scanf("%f", &quant);
            valor = valor + (10.70 * quant);
            printf("Pedido computado!\n");
        } else if (cod == 101) {
            printf("Perfeito! e qual a quantidade? ");
            scanf("%f", &quant);
            valor = valor + (12.30 * quant);
            printf("Pedido computado!\n");
        } else if (cod == 102) {
            printf("Perfeito! e qual a quantidade? ");
            scanf("%f", &quant);
            valor = valor + (22.60 * quant);
            printf("Pedido computado!\n");
        } else if (cod == 103) {
            printf("Perfeito! e qual a quantidade? ");
            scanf("%f", &quant);
            valor = valor + (12.40 * quant);
            printf("Pedido computado!\n");
        } else if (cod == 104) {
            printf("Perfeito! e qual a quantidade? ");
            scanf("%f", &quant);
            valor = valor + (19.50 * quant);
            printf("Pedido computado!\n");
        } else if (cod == 105) {
            printf("Perfeito! e qual a quantidade? ");
            scanf("%f", &quant);
            valor = valor + (5.00 * quant);
            printf("Pedido computado!\n");
        } else if (cod == 0) {
            printf("Finalizando pedido...\n");
        } else {
            printf("Código inválido! Insira um código entre 100 e 105, ou 0 para finalizar.\n");
        }

    }
    
    printf("Seu pedido está pronto! O valor total é R$%.2f", valor);

    return 0;
}
