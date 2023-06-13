/*
Elabore um algoritmo que leia um vetor de caracteres de tamanho 10. Logo após leia um caractere e
verifique se o mesmo está presente no vetor lido. Caso esteja, mostre as posições em que ele esteja
presente. Caso contrário mostre uma mensagem informando que o caractere lido não está presente no
vetor.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracteres[10];
    char inserido;
    int controle = 0, controle1 = 0;

    printf("Insira os 10 caracteres para que estão no vetor\n");
    
    while (controle < 10)
    {
        fflush(stdin);
        scanf("%c", &inserido);
        caracteres[controle] = inserido;
        controle++;
    }

    printf("Agora insira um valor que deseja verificar: ");
    fflush(stdin);
    scanf("%c", &inserido);

    controle = 0;
    controle1 = 0;
    while (controle < 10)
    {
        if (caracteres[controle] == inserido)
        {
            printf("Seu número aparece na posição %d do vetor\n", (controle + 1));
            controle1++;
        }
        controle++;
    }
    if (controle1 == 0) {
        printf("O número inserido não está presente no vetor\n");
    }
    
    return 0;
}
