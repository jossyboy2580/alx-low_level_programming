#include "main.h"
#include <string.h>

int print_rev(char *, int);
/**
 * _print_rev_recursion - A function that uses recursion to
 * print a string in reverse
 *
 * @s: Pointer to the string
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	print_rev((s + len - 1), len - 1);
}

/**
 * print_rev - A func that prints a string in reverse
 *
 * @s: the string to print
 * @len: length of the string
 * Return: success as 0 and otherwise as 1
 */

int print_rev(char *s, int len)
{
	if (*s == '\0')
		return (0);
	if (len == 0)
	{
		_putchar(*s);
		return (0);
	}
	_putchar(*s);
	len--;
	print_rev((s - 1), len);
	return (1);
}
