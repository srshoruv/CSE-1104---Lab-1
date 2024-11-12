#include <stdio.h>

int main(){
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    int sum = a + b;
    printf("%d + %d = %d\n",a,b,sum);
    return 0;

}