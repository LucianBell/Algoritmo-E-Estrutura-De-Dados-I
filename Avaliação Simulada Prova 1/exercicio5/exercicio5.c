//5. Elabore um algoritmo para ler dois números inteiros e, se o segundo valor lido for maior do que o
//primeiro, escrever todos os números inteiros no intervalo que vai do primeiro ao segundo, inclusive, em
//ordem crescente.
#include <stdio.h>

int main()
{
    int n1, n2, con;
    printf("Insert first number: ");
    scanf("%d", &n1);

    printf("Insert second number: ");
    scanf("%d", &n2);
    
    if (n1 > n2 || n1 == n2) {
        printf("Ending program...\n");
    } else {
        con = (n1 + 1);

        while (con < n2)
        {
            printf("%d\n", con);
            con++;
        }
        printf("Ending program...\n");
    }

    return 0;
}
