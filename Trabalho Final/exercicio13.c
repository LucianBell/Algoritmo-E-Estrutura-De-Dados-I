/*
Faça um programa que preencha uma matriz 7 x 7 de números inteiros e crie dois vetores com sete
posições cada um que contenham, respectivamente, o maior elemento de cada uma das linhas e o menor
elemento de cada uma das colunas. Escreva a matriz e os dois vetores gerados.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
// Declaração das variáveis
    int matrizdenumerosinteiros[7][7];
    int maiorelementodalinha[7];
    int menorelementodacoluna[7];
    int linha;
    int coluna;

// Loop para preencher a matriz
for(linha = 0; linha < 7; linha++)
{
for(coluna = 0; coluna < 7; coluna++)
{
    printf("Digite os valores [%d][%d]: ", linha+1, coluna+1);
    scanf("%d", &matrizdenumerosinteiros[linha][coluna]);
}
}

// Loop para mostrar o maior elemento de cada linha
for(linha = 0; linha < 7; linha++)
{
    maiorelementodalinha[linha] = matrizdenumerosinteiros[linha][0];

for(coluna = 1; coluna < 7; coluna++)
{
    if(matrizdenumerosinteiros[linha][coluna] > maiorelementodalinha[linha])
    {
    maiorelementodalinha[linha] = matrizdenumerosinteiros[linha][coluna];
    }
}
}
// Loop para mostrar o menor elemento de cada coluna
for(coluna = 0; coluna < 7; coluna++)
{
menorelementodacoluna [coluna] = matrizdenumerosinteiros[0][coluna];

for(linha = 1; linha < 7; linha++)
{
    if(matrizdenumerosinteiros[linha][coluna] < menorelementodacoluna[coluna])
    {
    menorelementodacoluna[coluna] = matrizdenumerosinteiros[linha][coluna];
    }
}
}

// Monstra todos os resultados
printf("\nMatriz:\n");

for(linha = 0; linha < 7; linha++)
{
for(coluna = 0; coluna < 7; coluna++)
{
printf("%d ", matrizdenumerosinteiros[linha][coluna]);
}
printf("\n");
}

//
printf("\nMaior elemento de cada linha:\n");
for(linha = 0; linha < 7; linha++)
{
printf("%d ", maiorelementodalinha[linha]);
}

printf("\nMenor elemento de cada coluna:\n");
for(coluna = 0; coluna < 7; coluna++)
{
printf("%d ", menorelementodacoluna[coluna]);
}



return 0;
}