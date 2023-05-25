//1. Elabore um algoritmo que, dada uma quantidade indeterminada de números, um de cada vez, conte quantos números foram fornecidos e quantos deles são negativos, mostrando estas informações.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    int total, neg;
    char entrada;
    total = 0;
    neg = 0;
    entrada = 's';
    
    while (entrada == 's')
    {
        scanf("%f", &n);
        if (n < 0) {
            neg++;
        }
        total++;
        printf("Deseja continuar (S para confirmar): ");
        //Limpa o buffer de entrada
        //NECESSÁRIO SEMPRE QUE VAI LER CHAR SUCESSIVAMENTE
        fflush(stdin);
        scanf("%c", &entrada);
    }

    printf("Total de números lidos: %d\n", total);
    printf("Total números negativos: %d\n", neg);
    printf("Total números positivos: %d\n", total - neg);
    
    return 0;
}
