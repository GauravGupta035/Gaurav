//WAP to find the sum of n fractions.
#include <stdio.h>
#include <stdio.h>
struct fraction
{
    float a;
    float b;
};
typedef struct fraction Fraction;

Fraction input()
{
    Fraction f;
    printf("Enter numerator: ");
    scanf("%f",&f.a);
    printf("Enter denominator: ");
    scanf("%f",&f.b);
    return f;
}

float addition(Fraction f)
{
    float res;
    res = (f.a / f.b); 
    return res;
}

void output(float res)
{
    printf("The answer is: %f",res);
}

int main(void)
{
    int n;
    float sum=0.0;
    Fraction f;
    printf("Enter number of fractions: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        f = input();
        sum += addition(f);
    }
    output(sum);
    return 0;
}
