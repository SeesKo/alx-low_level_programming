#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @s: Operator passed as an argument.
 * Return: Pointer to the function that corresponds to the
 * operator given as a parameter or NULL if no match is found.
 */

int (*get_op_func(char *s))(int, int)
{
	/* Using ops array to store operators and their corresponding functions */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	/* Initialize counter to go through the array */
	int i = 0;

	/* Comparing the current operator in the array with the input operator 's' */
	while (ops[i].op != NULL)
	{
		/* If match is found, return the corresponding function pointer */
		if (strcmp(ops[i].op, s) == 0)
			return ops[i].f;
		/* Move to next array element */
		i++;
	}

	/* If no matching operator is found; */
	return (NULL);
}
