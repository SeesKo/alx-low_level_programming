#include <stdio.h>
#include <string.h>

/**
 * add_digits - Adds digits from two strings and handles carry.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * @i: Current index in the first number.
 * @j: Current index in the second number.
 * @carry: Carry value to add.
 * @k: Index for storing the result.
 *
 * Return: 1 if successful, 0 if buffer overflow.
 */
int add_digits(char *n1, char *n2, char *r, int size_r,
		int i, int j, int carry, int *k)
{
	int sum;

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
		if (*k >= size_r - 1)
		{
			return (0);
		}
		r[(*k)++] = (sum % 10) + '0';
	}

	return (1);
}

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
	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;
	int carry = 0;

	if (size_r <= (len1 > len2 ? len1 : len2) + 1)
	{
		return (0);
	}

	if (!add_digits(n1, n2, r, size_r, i, j, carry, &k))
	{
		return (0);
	}

	r[k] = '\0';

	for (i = 0; i < k / 2; i++)
	{
		char temp = r[i];

		r[i] = r[k - i - 1];
		r[k - i - 1] = temp;
	}

	return (r);
}
