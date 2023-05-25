#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;

    scanf("%f", &n1);
    scanf("%f", &n2);

    media = (n1 + n2) / 2.0;

    if (media > 7.0) {
        printf("Aprovado, com média %.2f", media);
    } else {
        printf("Reprovado, com média %.2f", media);
    }

    return 0;
}
