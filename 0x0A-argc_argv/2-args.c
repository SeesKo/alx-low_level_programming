#include <stdio.h>

/**
 * main - Prints all arguments received.
 * @argc: Argument count.
 * @argv: Array of strings representing arguments.
 * Return: 0 means success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
