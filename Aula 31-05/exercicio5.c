/*
5)   
Anacleto tem 1,50 metro e cresce 2
centímetros por ano, enquanto Felisberto tem 1,10 metro e cresce 3 centímetros
por ano. Construa um programa que calcule e mostre quantos anos serão
necessários para que Felisberto seja maior que Anacleto.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float alturaAnacleto, alturaFelisberto;
    int anos;
    anos = 0;
    alturaAnacleto = 1.50;
    alturaFelisberto = 1.10;

    while (alturaFelisberto < alturaAnacleto)
    {
        alturaAnacleto = alturaAnacleto + 0.2;
        alturaFelisberto = alturaFelisberto + 0.3;
        anos++;
    }

    printf("Serão necessários %d anos para que Felisberto passe da altura de Anacleto", anos);
    
    return 0;
}
