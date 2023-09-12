#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @i: Function parameter.
 *
 * Return: Absolute value of an integer.
 */

int _abs(int i)
{
	if (i >= 0)
		return (i);
	else if (i < 0)
		return (-i);
	return (0);
}
