#include <stdio.h>

/**
 * main - Prints program name.
 * @argc: Number of command line arguments passed.
 * @argv: Array of strings representing arguments passed.
 * Return: 0 means success.
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
