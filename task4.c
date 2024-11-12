#include <stdio.h>
int main(){
    int a, b, product;

    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);

    product = a*b;

    printf("%d x %d = %d \n", a,b,product);

    return 0;
}