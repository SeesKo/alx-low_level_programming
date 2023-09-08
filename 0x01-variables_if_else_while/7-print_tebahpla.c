#include <stdio.h>

/**
 * main - Prints alphabet in reverse.
 *
 * Return: 0 means success.
 */

int main(void)
{
	char abcd;

	for (abcd = 'z'; abcd >= 'a'; abcd--)
		putchar(abcd);

	putchar('\n');

	return (0);
}
