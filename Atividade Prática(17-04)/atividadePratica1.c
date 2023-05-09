#include <stdio.h>

int main()
{
    int foodCode, quantity;

    printf("Insert product code: ");
    scanf("%d", &foodCode);

    if (foodCode < 100 || foodCode > 105) {
        printf("INVALID CODE! Run the program again!");
        return 0;
    } else {
        printf("Insert how many of this product you want: ");
        scanf("%d", &quantity);
        if (foodCode == 100) {
            printf("Your order is ready! The total price is $%.2f", (quantity * 11.70));
        } else if (foodCode == 101) {
            printf("Your order is ready! The total price is $%.2f", (quantity * 24.30));
        } else if (foodCode == 102) {
            printf("Your order is ready! The total price is $%.2f", (quantity * 25.60));
        } else if (foodCode == 103) {
            printf("Your order is ready! The total price is $%.2f", (quantity * 22.40));
        } else if (foodCode == 104) {
            printf("Your order is ready! The total price is $%.2f", (quantity * 15.50));
        } else if (foodCode == 105) {
            printf("Your order is ready! The total price is $%.2f", (quantity * 5.00));   
        }
    }
}
