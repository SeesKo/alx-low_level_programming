#include <stdio.h>

/**
 * main - Prints all possible combinations of 2 two-digit numbers.
 *
 * Return: 0 means success in C.
 */

int main(void)
{
	int i, j, k;
	char numbers[6];

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			numbers[0] = i / 10 + '0';
			numbers[1] = i % 10 + '0';
			numbers[2] = ' ';
			numbers[3] = j / 10 + '0';
			numbers[4] = j % 10 + '0';
			numbers[5] = '\0';

			for (k = 0; k < 5; k++)
				putchar(numbers[k]);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
