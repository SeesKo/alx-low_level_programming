#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: Pointer to a character array.
 * @f: Function pointer to function that takes
 * a pointer to a character as an argument.
 * Return: Void.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
