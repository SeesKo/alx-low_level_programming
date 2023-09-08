#include <stdio.h>

/**
 * main - Entry point.
 * Description: Prints alphabet (lowercase).
 * Return : Always 0 (Success)
 */

int main(void)
{
	char abcd;

	for (abcd = 'a'; abcd <= 'z'; abcd++)
		putchar(abcd);
	return (0);
}
