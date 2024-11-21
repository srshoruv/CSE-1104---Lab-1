#include <stdio.h>

int main()
{
    printf("Adding two float numbers \n");
    printf("---------------------\n");

    float a,b,sum;

    printf("Enter two float numbers to add: ");

    if(!scanf("%f %f", &a, &b)) 
    {
        printf("Invalid Input!\n");
        return 0;
    }

    sum = a + b;
    printf("%.2f + %.2f = %.2f\n", a, b, sum);
    
    return 0;
}