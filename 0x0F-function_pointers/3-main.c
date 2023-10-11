#include "3-calc.h"

/**
 * main - Performs basic arithmetic operations.
 * @argc: Argument count.
 * @argv: Array of strings representing arguments.
 * Return: An integer value as the exit status.
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char *operator;
	/* Function pointer 'calc_func' declared to be used to call the appropriate */
	/* arithmetic operation function based on the operator provided */
	int (*calc_func)(int, int);

	/* Check the number of command line arguments */
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	/* Converting 1st and 3rd arguments into integers */
	a = atoi(argv[1]);
	operator = argv[2];
	b = atoi(argv[3]);

	/* Checking if the operator is a single character and whether */
	/* it's one of the valid arithmetic operators */
	if (strlen(operator) != 1 || (operator[0] != '+' && operator[0] != '-' &&
		operator[0] != '*' && operator[0] != '/' && operator[0] != '%'))
	{
		printf("Error\n");
		return (99);
	}

	/* Getting the function corresponding to the operator using get_op_func */
	calc_func = get_op_func(operator);

	/* Checking if a valid function was retrieved */
	if (calc_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	/* Performing the operation using the selected function */
	result = calc_func(a, b);

	/* Printing the result */
	printf("%d\n", result);

	/* Returning success code */
	return (0);
}
