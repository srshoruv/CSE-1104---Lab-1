#include <stdio.h>
int main(){
    int a, b, sum;

    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);

    sum = a+b;

    printf("%d + %d = %d \n", a,b,sum);

    return 0;
}