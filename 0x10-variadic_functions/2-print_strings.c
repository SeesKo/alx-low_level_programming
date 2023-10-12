#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to the function.
 * @separator: String to be printed between the strings.
 * @n: Number of strings passed to the function.
 * Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		/* Retrieve the next string argument */
		str = va_arg(args, const char*);

		/* Checking if string is null */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		/* Print the separator if it is not */
		/* NULL and not the last string */
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
