#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b.
 * @a: First operand.
 * @b: Second operand.
 * Return: The result of the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: First operand.
 * @b: Second operand.
 * Return: The result of the subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_sub - Returns the product of a and b.
 * @a: First operand.
 * @b: Second operand.
 * Return: The result of the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of the division of a by b.
 * @a: Dividend.
 * @b: Divisor.
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: Dividend.
 * @b: Divisor.
 * Return: The remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
