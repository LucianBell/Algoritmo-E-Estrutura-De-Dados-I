#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, soma;
    n1 = 0;
    n2 = 0;

    printf("Primeiro valor: ");
                //esse & significa que é pra armazenar no endereço de memória da variavel n1
    scanf("%d", &n1);
    printf("Segundo valor: ");
    scanf("%d", &n2);

    soma = n1+n2;
    
    printf("Soma: %d", soma);

    return 0;
}
