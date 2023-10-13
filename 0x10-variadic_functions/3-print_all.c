#include "variadic_functions.h"

/**
 * print_all - Prints different types passed to the function.
 * @format: List of types of arguments passed to the function.
 * Return: Void.
 */

void print_all(const char * const format, ...)
{
	int i;
	char *str;
	va_list args;

	va_start(args, format);
	i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'd':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
				{
					str = va_arg(args, char*);
					if (str == NULL)
						printf("(nil)");
					printf("%s", str);
					break;
				}
				default:
					break;
			}
		}
		putchar(format[i]);
		i++;
	}
	printf("\n");
	va_end(args);
}
