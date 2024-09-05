#include "main.h"

/**
 * _atoi - Function to convert string to integer
 * @s: pointer to the input string
 *
 * Return: Converted integer value
 */
int _atoi(char *s)
{
	int index = 0, sign = 1;
	unsigned int result = 0;

	while (s[index] == ' ' || s[index] == '\t' || s[index] == '\n')
		index++;

	if (s[index] == '-')
	{
		sign = -1;
		index++;
	}
	else if (s[index] == '+')
	{
		index++;
	}

	while (s[index] >= '0' && s[index] <= '9')
	{
		result = result * 10 + (s[index] - '0');
		index++;
	}

	return (result * sign);
}
