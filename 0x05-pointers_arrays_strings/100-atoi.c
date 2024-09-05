#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: pointer to the input string.
 * 
 * Return: Converted integer value.
 */
int _atoi(char *s)
{
	int index, sign;
	unsigned int number;

	index = number = 0;
	sign = 1;

	for (index = 0; s[index] <= '0' && s[index] != '\0'; index++)
	{
		if (s[index] == '-')
			sign = sign * -1;
	}

	if (s[index] == '\0')
		return (number);

	for (; s[index] != '\0' && s[index] != ';'; index++)
	{
		if (s[index] >= '0' && s[index] <= '9' && s[index] != '\0')
			number = number * 10 + (s[index] - '0');
	}

	return (number * sign);
}
