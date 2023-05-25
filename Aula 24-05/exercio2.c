#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    i = 1;

    printf("Insira um número: ");
    scanf("%d", &x);

    while (i <= x)
    {
        printf("%d\n", i);
        i++;
    }
    
    printf("Terminando programa :D");

    return 0;
}
