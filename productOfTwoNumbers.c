#include <stdio.h>

int main()
{
    printf("Multiplying two numbers \n");
    printf("---------------------\n");

    int a,b,mult;

    printf("Enter two numbers to multiply: ");

    if(!scanf("%d %d", &a, &b)) 
    {
        printf("Invalid Input!\n");
        return 0;
    }

    mult = a * b;
    printf("%d x %d = %d\n", a, b, mult);
    
    return 0;
}