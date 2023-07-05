#include "main.h"
#include <string.h>

void reverse_printer(char *s, int len);
/**
 * _print_rev_recursion - Reverse a string and print
 *
 * @s: the string to print in reverse
 */

void _print_rev_recursion(char *s)
{
	int len = 0;

	len = strlen(s);
	if (len > 0)
		reverse_printer(s, len - 1);
}

/**
 * reverse_printer - A function to print a string in
 * reverse
 *
 * @s: Pointer to a string
 * @len: The last point
 */

void reverse_printer(char *s, int len)
{
	if (len <= 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[len] + 0);
	reverse_printer(s, len - 1);
}
