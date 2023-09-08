#include <stdio.h>

/**
 * main - Alphabet list excluding e and q.
 *
 * Return: Always 0.
 */

int main(void)
{
	char abcd;

	for (abcd = 'a'; abcd <= 'z'; abcd++)
	{
		if (abcd != 'e' && abcd != 'q')
			putchar(abcd);
	}

	putchar('\n');

	return (0);
}
