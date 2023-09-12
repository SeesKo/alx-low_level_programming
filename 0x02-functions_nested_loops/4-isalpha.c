#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 *
 * @c: Function parameter.
 *
 * Return: 1 if c is a letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
