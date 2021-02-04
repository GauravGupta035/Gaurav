//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>

int main()
{
    int num1, num2, total;

    printf("Enter first Number: ");
    scanf("%d", &num1);
    printf("Enter second Number: ");
    scanf("%d", &num2);

    total = num1 + num2;

    printf("Sum of %d and %d is %d", num1, num2, total);

    return 0;
}