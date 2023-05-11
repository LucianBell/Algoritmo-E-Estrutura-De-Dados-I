#include <stdio.h>

int main()
{
		int num1, num2, aux;
        printf("Insert the first number: \n");
		scanf ("%d", &num1);
        printf("Insert the second number: \n");
		scanf ("%d", &num2);

		if (num1 > num2) {
			aux = num1;
			num1 = num2;
			num2 = aux;
		}

		if (num1 > 0 && num2 >0) {
			printf("O intervalo possui 0 números negativos é %d", ((num2 - num1) + 1));
		} else if (num1 < 0 && num2 < 0) {
				printf("O intervalo possui %d números negativos e 0 números positivos", ((num2 - num1) + 1));
			} else {
				printf("O intervalo possui %d números negativos e %d números positivos", (num1 * -1), num2);
			}
}
