/*
5) Construa um algoritmo que leia um conjunto de dados contendo altura e sexo
('M' para masculino e 'F' para feminino) de 20 pessoas e, depois calcule e mostre:

    a maior e a menor altura do grupo;
    a média de altura das mulheres;
    o número de homens e a diferença percentual entre eles e as mulheres;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int controleDados, quantHomens;
    float alturaAtual, maiorAltura, menorAltura, mediaAlturaMulheres, diferencaPercentual;
    char sexo;
    controleDados = 1;
    quantHomens = 0;

    while (controleDados <= 20)
    {
        printf("Insira o sexo da pessoa: ");
        fflush(stdin);
        scanf("%c", &sexo);

        printf("Insira a altura da pessoa: ");
        scanf("%f", &alturaAtual);

        if (controleDados == 1) {
            maiorAltura = alturaAtual;
            menorAltura = maiorAltura;
        }

        if (sexo == 77) {
            quantHomens++;
        } else {
            mediaAlturaMulheres += alturaAtual;
        }

        if (controleDados == 1) {
            maiorAltura = alturaAtual;
            menorAltura = maiorAltura;
        } else if (alturaAtual > maiorAltura) {
            maiorAltura = alturaAtual;
        } else if (alturaAtual < menorAltura) {
            menorAltura = alturaAtual;
        }
        controleDados++;
    }
    
    printf("\n");
    printf("Maior altura do grupo: %.2f\n", maiorAltura);
    printf("Menor altura do grupo: %.2f\n", menorAltura);
    printf("Media altura das mulheres: %.2f\n", ((mediaAlturaMulheres / (20.0 - quantHomens))));
    printf("Quantidade de homens: %d\n", quantHomens);
    printf("Homens representam %.2f porcento e mulheres representam %.2f porcento \n", ((quantHomens * 100.0) / 20.0), (100.0 - ((quantHomens * 100.0) / 20.0)) );

    return 0;
}
