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

Fraction output(Fraction f, int divisor)
{

	f.num /= divisor;
	f.deno /= divisor;

	printf("The answer is: %d/%d", f.num, f.deno);
}

int main()
{
    Fraction A, B, s;
    int divisor;

    A = input();
    B = input();
    s = addition(A, B);

    divisor = gcd(s.num, s.deno);
    output(s, divisor);

    return 0;
}