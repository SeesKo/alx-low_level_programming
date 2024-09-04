#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to generate the times table up to.
 */
void print_times_table(int n)
{
	int i, j;

	/* Check if n is within the valid range */
	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			/* Print result with proper formatting */
			if (j == 0)
			{
				printf("%d", result);
			}
			else
			{
				printf(",%4d", result);
			}
		}
		printf("\n");
	}
}
