#include "main.h"

/**
 * _islower - Checks for lowercase characters.
 *
 *@c: Parameter for lowercase characters to be checked.
 *
 * Return: 1 if character is lowercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
