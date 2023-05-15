//3. Joãozinho vai convidar alguns colegas da escola para comer pizza em sua casa. Dona Maria, a mãe
//de Joãozinho precisa saber quanto vai gastar com isto. Escreva um algoritmo que, dado o número de
//colegas que vão comer pizza, calcule o total da despesa, sabendo-se que:
//
//a) cada criança come três pedaços de pizza;
//b) cada pizza é cortada em dez pedaços;
//c) cada pizza custa R$ 21,00.

#include <stdio.h>

int main()
{
    int colegas, con, pizzas;

    printf("Enter the number of friends that are comming to the party: ");
    scanf("%d", &colegas);

    if (colegas <= 2) {
        printf("Dona Maria will spend R$21,00\n");
    } else {
        con = (colegas + 1) * 3;
        while (con > 0)
        {
            con = con - 10;
            pizzas++;
        }
        printf("The number of pizzas will be %d, and the total value will be %d\n", pizzas, (pizzas * 21));
    }

    return 0;
}
