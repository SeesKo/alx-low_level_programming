#include "main.h"

/**
 * is_prime_number - Returns 1 if input is prime number.
 * @n: Integer input.
 * Return: 0 unless input is prime number.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	else if (n == 5)
		return (1);
	else if ((n % 5) == 0)
		return (0);
	else
		return (1);
}
