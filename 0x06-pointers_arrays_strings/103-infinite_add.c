#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result string, or 0 if the result cannot
 * fit in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0, sum;
	int i, j, k;

	if (size_r <= (len1 > len2 ? len1 : len2) + 1)
	{
		return (0);
	}

	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}

		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}

		carry = sum / 10;
		if (k >= size_r - 1)
		{
			return (0);
		}
		r[k++] = (sum % 10) + '0';
	}

	r[k] = '\0';

	if (k >= size_r)
	{
		return (0);
	}

	for (i = 0; i < k / 2; i++)
	{
		char temp = r[i];

		r[i] = r[k - i - 1];
		r[k - i - 1] = temp;
	}

	return (r);
}
