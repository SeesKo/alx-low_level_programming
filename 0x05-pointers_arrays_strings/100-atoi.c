#include "main.h"

/**
 * _atoi - Function to convert string to integer
 * @s: pointer to the input string
 * 
 * Return: Converted integer value
 */
int _atoi(char *s)
{
	int a = 0, prefix = 1;
	unsigned int b = 0;

	while (s[a] == ' ' || s[a] == '\t' || s[a] == '\n')
		a++;

	if (s[a] == '-')
	{
		prefix = -1;
		a++;
	}
	else if (s[a] == '+')
	{
		a++;
	}

	while (s[a] >= '0' && s[a] <= '9')
	{
		b = b * 10 + (s[a] - '0');
		a++;
	}

	return (b * prefix);
}
