/**
 * main - Prints 0 to 9 using putchar
 *
 * Return: 0 means success.
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar((digit % 10) + '0');

	putchar('\n');

	return (0);
}
