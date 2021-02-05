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

void output(Fraction sum)
{
    printf("The sum is %d/%d", sum.num, sum.deno);
}

Fraction addition(Fraction A, Fraction B)
{
    Fraction sum;
    sum.deno = A.deno * B.deno;
    sum.num = (A.num * B.deno) + (B.num * A.deno);

    return sum;
}

int main()
{
    Fraction A, B, s;
    A = input();
    B = input();
    s = addition(A, B);
    output(s);

    return 0;
}