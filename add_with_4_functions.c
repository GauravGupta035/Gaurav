//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>

int input()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    return a;
}

void output(int a, int b, int out)
{
    printf("Sum of %d and %d is %d", a, b, out);
}

int sum(int a, int b)
{
    int sum;
    sum = a + b;

    return sum;
}

int main()
{
    int num1, num2, total;

    num1 = input();
    num2 = input();
    total = sum(num1, num2);

    output(num1, num2, total);

    return 0;
}