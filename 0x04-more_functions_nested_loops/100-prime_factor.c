#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of a number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long largest_prime = 0;
	unsigned long i;

	while (n % 2 == 0)
	{
		largest_prime = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n /= i;
		}
	}

	if (n > 2)
		largest_prime = n;

	printf("%lu\n", largest_prime);

	return (0);
}
