#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argc: Number of arguments.
 * @argv: Array of strings passed as arguments.
 * Return: 0 means success.
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int x = atoi(argv[i]);

		if (x <= 0 && argv[i][0] == '0')
		{
			printf("Error\n");
			return (1);
		}

		sum += x;
	}

	printf("%d\n", sum);

	return (0);
}
