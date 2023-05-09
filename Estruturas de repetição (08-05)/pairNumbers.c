#include <stdio.h>

int main()
{
    int x, n, counter;
    n = -1;
    x = 1;
    counter = 0;
    
    while (n < 0)
    {
        printf("Enter a positive number and recieve the pairs between zero and your number: ");
        scanf("%d", &n);
    }

    while (x <= n)
    {
        if ((x % 2) == 0) {
            printf("%d\n", x);
            counter++;
        }
        x++;
    }
    
    printf("\nTotal pair numbers: %d\n", counter);
    printf("Ending program... Good night! :D");
}
