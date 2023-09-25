#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer parameter.
 * @to: Pointer to a char.
 * Return: Void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
