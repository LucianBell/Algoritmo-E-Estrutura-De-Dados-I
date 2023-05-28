//6. Elabore um algoritmo que, dada uma quantidade indeterminada de números, um de cada vez, conte quantos deles estão em cada um dos seguintes intervalos: 0–25, 26–50, 51–75, 76–100.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ctrl = 's';
    int atual, int1, int2, int3, int4;
    int1 = 0;
    int2 = 0;
    int3 = 0;
    int4 = 0;

    while (ctrl == 's')
    {
        printf("Insira um número: ");
        scanf("%d", &atual);

        if (atual < 26) {
            int1++;
        } else if (atual < 51)
        {
            int2++;
        } else if (atual < 76) {
            int3++;
        } else {
            int4++;
        }
        
        printf("Deseja continuar? Digite s para confirmar, ou qualquer outra tecla para parar: ");
        fflush(stdin);
        scanf("%c", &ctrl);
    }
    
    printf("Você digitou %d valores do intervalo 1, %d do intervalo 2, %d do intervalo 3 e %d do intervalo 4.", int1, int2, int3, int4);

    return 0;
}
