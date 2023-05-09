//Make an algorith that read the grades of 15 students and give the final GPA

#include <stdio.h>

int main()
{
    int x;
    float grade, sum;

    x = 0;
    sum = 0.0;

    while (x < 15)
    {
        printf("Student's grade: ");
        scanf("%f", &grade);
        sum = sum + grade;
        x++;
    }
    
    printf("The class final GPA is %.2f\n", (sum / 15.0));
}
