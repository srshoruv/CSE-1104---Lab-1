#include <stdio.h>

int main()
{
    printf("Adding two numbers \n");
    printf("---------------------\n");

    int a,b,sum;

    printf("Enter two numbers to add: ");

    if(!scanf("%d %d", &a, &b)) 
    {
        printf("Invalid Input!\n");
        return 0;
    }

    sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
    
    return 0;
}