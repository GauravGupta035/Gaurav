#include <stdio.h>

int input() 
{
    int a;
    printf ("Enter number of elements: ");
    scanf ("%d", &a);
    return a;
}

void input_array(int n, int a[n]) 
{
    for (int i = 0; i < n; i++)
    {
    printf("Enter element number %d: ", i+1);
    scanf("%d", &a[i]);
    } 
} 
 
int addition(int n, int a[n]) 
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    } 
    return sum;
}
int output(int sum) 
{
    int i;
    printf("The sum is %d", sum);
}

int main() 
{
    int n, sum;
    n = input();
    int a[n];
    input_array(n, a);
    sum = addition(n, a);
    output(sum);
} 
