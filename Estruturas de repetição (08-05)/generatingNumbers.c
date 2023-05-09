#include <stdio.h>

int main()
{
    int num, givenNum;
    
    printf("Choose a number: ");
    scanf("%d", &givenNum);
    
    if (givenNum > 0) {
        num = 1;
        while (num <= givenNum) {
            printf("%d\n", num);
            num++;
        }
    } else {
        num = 0;
        while (num >= givenNum) {
            printf("%d\n", num);
            num--;
        }
    }
}
