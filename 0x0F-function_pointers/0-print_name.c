#include "function_pointers.h"

/**
 * print_name - A function to print a name
 *
 * @name: The name we want to print
 * @f: A pointer to a function that takes in a string and returns
 * void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f != NULL)
		f(name);
}
