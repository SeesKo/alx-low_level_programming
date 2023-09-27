#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Radicand.
 * Return: -1 if radicand does not have natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (0);
}
