#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid
 * passwords for a program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int index = 0, total = 0, char_to_add;
	int random_val;

	srand(time(NULL));

	while (index < 100)
	{
		random_val = rand() % 78;
		total += (random_val + '0');
		putchar(random_val + '0');

		if ((2772 - total) - '0' < 78)
		{
			char_to_add = 2772 - total - '0';
			total += char_to_add;
			putchar(char_to_add + '0');
			break;
		}

		index++;
	}

	return (0);
}
