#include "main.h"

/**
 * _puts_recursion - the puts fuction but recursive
 *
 * @s: pointer to the string s
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s + 0);
	_puts_recursion(s + 1);
}
