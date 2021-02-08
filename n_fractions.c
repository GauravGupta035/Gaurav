//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction
{
    int num;
    int deno;
};
typedef struct fraction Fraction;

Fraction input()
{
    Fraction f;
    printf("Enter numerator: ");
    scanf("%d",&f.num);
    printf("Enter denominator: ");
    scanf("%d",&f.deno);
    return f;
}

Fraction addition(Fraction f1, Fraction f2)
{
    Fraction res;
    res.deno = f1.deno * f2.deno;
    res.num = (f1.num * f2.deno) + (f2.num * f1.deno);

    return res;
}

int gcd(int num, int deno)
{
    int div;
    for (int i = 1; i <= num && i <= deno; i++)
    {
        if (num % i == 0 && deno % i == 0)
            div = i;
    }

    return div;
}

int main(void)
{
    int n, divisor;
    Fraction f, result;

    result.num = 0;
    result.deno = 1;

    printf("Enter number of fractions: ");
    scanf("%d",&n);

    if (n == 1)
    {
        result = input();
    }

    else
    {
        Fraction fracs[n];

        result.num = 0;
        result.deno = 1; 

        for (int i = 0; i < n; i++)
        {
            f = input();
            fracs[i] = f;
        }

        for (int i = 0; i < n; i++)
        {
            result = addition(result, fracs[i]);
        }
            
    }

    divisor = gcd(result.num, result.deno);

    result.num /= divisor;
    result.deno /= divisor;

    printf("The answer is: %d/%d",result.num, result.deno);

    return 0;
}
