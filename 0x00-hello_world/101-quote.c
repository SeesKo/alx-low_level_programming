#include <unistd.h>

/**
 * main - program starting point
 * Return: 1 will mean success
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 59);
	return (1);
}
