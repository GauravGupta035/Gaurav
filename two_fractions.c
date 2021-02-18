//WAP to find the sum of two fractions.
#include <stdio.h>
#include <math.h>

struct fraction
{
    int num, deno;
};
typedef struct fraction Fraction;

Fraction input()
{
    Fraction f;
    printf("Enter numerator: ");
    scanf("%d", &f.num);
    printf("Enter denominator: ");
    scanf("%d", &f.deno);

    return f;
}

int gcd(int num, int deno)
{
    int div;
    // We start from i = 1 because division by zero is not possible
    for (int i = 2; i <= num && i <= deno; i++)
    {
        if (num % i == 0 && deno % i == 0)
            div = i;
    }

    return div;
}

Fraction reduce_lowest(Fraction f, int divisor)
{
    f.num /= divisor;
	f.deno /= divisor;

    return f;
}

Fraction addition(Fraction a, Fraction b)
{
    Fraction sum;
    sum.deno = a.deno * b.deno;
    sum.num = (a.num * b.deno) + (b.num * a.deno);

    int divisor = gcd(sum.num, sum.deno);
    sum = reduce_lowest(sum, divisor);

    return sum;
}

void output(Fraction a, Fraction b, Fraction f)
{
	printf("%d/%d + %d/%d = %d/%d", a.num, a.deno, b.num, b.deno, f.num, f.deno);
}

int main()
{
    Fraction A, B, S;
    int divisor;

    A = input();
    B = input();
    S = addition(A, B);
    output(A, B, S);

    return 0;
}
