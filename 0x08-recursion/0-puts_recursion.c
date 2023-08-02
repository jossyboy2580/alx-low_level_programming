#include "main.h"

/**
 * _puts_recursion - A functiin that prints the chars of a string
 * recursively
 *
 * @s: pointer to the string to print
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
