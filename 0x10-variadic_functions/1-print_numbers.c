#include "variadic_functions.h"

/**
 * print_numbers - Adds up integers entered as parameters.
 * @separator: String to be printed between numbers.
 * @n: Number of integers passed to the function.
 * Return: Sum of all parameters.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(args, int));
			/* If current integer being printed */
			/* isn't last on the list */
			if (i < (n - 1))
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");

	va_end(args);
}
