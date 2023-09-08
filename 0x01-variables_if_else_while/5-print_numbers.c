#include <stdio.h>

/**
 * main - Prints from 0 to 9.
 *
 * Return: 0 means success.
 */

int main(void)
{
	int digit;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
