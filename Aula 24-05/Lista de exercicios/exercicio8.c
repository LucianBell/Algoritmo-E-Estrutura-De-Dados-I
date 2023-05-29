//8. Escreva um algoritmo que, dados 20 números, informe qual a diferença entre a média dos primeiros 10 valores e a média dos últimos 10 valores.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ctrl, primeiros10, ultimos10, atual;
    float media1, media2;
    
    primeiros10 = 0;
    ultimos10 = 0;
    ctrl = 0;

    while (ctrl < 20)
    {
        printf("Insira um número: ");
        scanf("%d", &atual);

        if (ctrl < 10) {
            primeiros10 = primeiros10 + atual; 
        } else {
            ultimos10 = ultimos10 + atual; 
        }

        ctrl++;
    }
    
    media1 = primeiros10 / 10.0;
    media2 = ultimos10 / 10.0;

    printf("A média dos primeiros dez valores é %.2f, e dos últimos dez valores é %.2f, e a diferença entre eles é %.2f", media1, media2, (media1 - media2));

    return 0;
}
