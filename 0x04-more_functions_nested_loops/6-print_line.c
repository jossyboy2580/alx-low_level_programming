#include "main.h"

/**
 * print_line - Print the underscore n times
 *
 * @n: number of times to print _
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
