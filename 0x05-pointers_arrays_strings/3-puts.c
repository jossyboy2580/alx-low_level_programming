#include "main.h"

/**
 * _puts - print the string to standard output
 *
 * @str: Pointer to stri g we want to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + '0');
		str = str + 1;
	}
	_putchar('\n');
}
