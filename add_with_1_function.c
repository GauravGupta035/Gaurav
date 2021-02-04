//Write a program to add two user input numbers using one function.
#include <stdio.h>

int sumOfNumbers(int n1, int n2)
{
    int total;
    total = n1 + n2;

    return total;
}

int main()
{
    int num1, num2, final;

    printf("Enter first Number: ");
    scanf("%d", &num1);
    printf("Enter second Number: ");
    scanf("%d", &num2);

    final = sumOfNumbers(num1, num2);

    printf("Sum of %d and %d is %d", num1, num2, final);

    return 0;
}