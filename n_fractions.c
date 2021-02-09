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
	scanf("%d", &f.num);
	printf("Enter denominator: ");
	scanf("%d", &f.deno);
	
	return f;
}

Fraction addition(Fraction f1, Fraction f2)
{
	Fraction res;
	res.deno = f1.deno * f2.deno;
	res.num = (f1.num * f2.deno) + (f2.num * f1.deno);

	return res;
}

Fraction total_sum(Fraction arr[], int size)
{
	Fraction total;
	total.num = 0;
	total.deno = 1;

	for (int i = 0; i < size; i++)
		total = addition(total, arr[i]);

	return total;
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

Fraction output(Fraction f, int divisor)
{
	f.num /= divisor;
	f.deno /= divisor;

	printf("The answer is: %d/%d", f.num, f.deno);
}

int main()
{
	int n, divisor;
	Fraction f, result;

	printf("Enter the number of fractions: ");
	scanf("%d", &n);

	if (n == 1)
		result = input();
	else
	{
		Fraction fracs[n];

		for (int i = 0; i < n; i++)
		{
			f = input();
			fracs[i] = f;
		}

		result = total_sum(fracs, n);
	}

	divisor = gcd(result.num, result.deno);
	output(result, divisor);

return 0;
}
