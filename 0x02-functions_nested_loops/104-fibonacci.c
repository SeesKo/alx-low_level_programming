#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib1_low = 1, fib2_low = 2;
	unsigned long fib1_high = 0, fib2_high = 0;
	unsigned long next_low, next_high;
	int count;

	printf("%lu, %lu", fib1_low, fib2_low);

	for (count = 2; count < 98; count++)
	{
		next_low = fib1_low + fib2_low;
		next_high = fib1_high + fib2_high;

		if (next_low >= 1000000000)
		{
			next_low -= 1000000000;
			next_high += 1;
		}

		printf(", ");

		if (next_high > 0)
			printf("%lu%09lu", next_high, next_low);
		else
			printf("%lu", next_low);

		fib1_low = fib2_low;
		fib1_high = fib2_high;
		fib2_low = next_low;
		fib2_high = next_high;
	}

	printf("\n");
	return (0);
}
