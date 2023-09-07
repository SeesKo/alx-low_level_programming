#include <stdio.h>

/**
 * main - program starting point
 * Return: 0 means success 
 */

int main(void)
{
	char cr;
	int i;
	long int li;
	long long int lli;
	float f;

	puts("Size of a char: %zu byte(s)", sizeof(cr));
	puts("Size of an int: %zu byte(s)", sizeof(i));
	puts("Size of long int: %zu byte(s)", sizeof(li));
	puts("Size of long long int: %zu byte(s)", sizeof(lli));
	puts("Size of float: %zu byte(s)\n", sizeof(f));
	return (0);
}
