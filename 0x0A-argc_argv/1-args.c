#include <stdio.h>

/**
 * main - Prints the number of arguments.
 * @argc: Number of arguments.
 * @argv: Array of argument strings.
 * Return: 0 means success.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
