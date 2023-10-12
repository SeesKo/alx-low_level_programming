#include "variadic_functions.h"

/**
 * sum_them_all - Adds up integers entered as parameters.
 * @n: Number of integers in the variable argument list.
 * Return: Sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	/* Looping through the integer list and summing up values */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
