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
    for (int i = 1; i <= num && i <= deno; i++)
    {
        if (num % i == 0 && deno % i == 0)
            div = i;
    }

    return div;
}

Fraction addition(Fraction A, Fraction B)
{
    Fraction sum;
    sum.deno = A.deno * B.deno;
    sum.num = (A.num * B.deno) + (B.num * A.deno);

    return sum;
}

Fraction reduce_lowest(Fraction f, int divisor)
{
    f.num /= divisor;
	f.deno /= divisor;

    return f;
}

void output(Fraction A, Fraction B, Fraction F)
{
	printf("%d/%d + %d/%d = %d/%d", A.num, A.deno, B.num, B.deno, F.num, F.deno);
}

int main()
{
    Fraction A, B, S;
    int divisor;

    A = input();
    B = input();
    S = addition(A, B);

    divisor = gcd(S.num, S.deno);
    S = reduce_lowest(S, divisor);
    output(A, B, S);

    return 0;
}
