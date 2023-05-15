/* 8.Escreva um algoritmo que receba a idade de 15 pessoas, calcule e escreva:
   a) a quantidade de pessoas em cada faixa;
   b) a porcentagem de cada faixa etária em relação ao total de pessoas;
        As faixas etárias são:
        1 --------- 15 anos
        16 ------- 30 anos
        31 ------- 45 anos
        46 ------- 60 anos
        >= 61 anos
*/

#include <stdio.h>

int main()
{
    int idade, con, quant1, quant2, quant3, quant4, quant5;
    float perc1, perc2, perc3, perc4, perc5;

    quant1 = 0; 
    quant2 = 0;
    quant3 = 0;
    quant4 = 0;
    quant5 = 0;

    con = 0;

    while (con < 15)
    {
        printf("Insert your age: ");
        scanf("%d", &idade);
        printf("\n");

        if (idade <= 15) {
            quant1++;
        } else if (idade <= 30 && idade >= 16) {
            quant2++;
        } else if (idade <= 45 && idade >= 31) {
            quant3++;
        } else if (idade <= 60 && idade >= 46) {
            quant4++;
        } else {
            quant5++;
        }

        con++;
    }

    printf("The total of people is, by category, %d in the first, %d in the second, %d in the third, %d in the forth and %d in the fifth\n", quant1, quant2, quant3, quant4, quant5);
    
    perc1 = ((100 * quant1) / 15.00);
    perc2 = ((100 * quant2) / 15.00);
    perc3 = ((100 * quant3) / 15.00);
    perc4 = ((100 * quant4) / 15.00);
    perc5 = ((100 * quant5) / 15.00);

    printf("The percentage of people is, by category, %.2f in the first, %.2f in the second, %.2f in the third, %.2f in the forth and %.2f in the fifth\n", perc1, perc2, perc3, perc4, perc5);

    return 0;
}
