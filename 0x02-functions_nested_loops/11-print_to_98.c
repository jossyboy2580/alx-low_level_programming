#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 *
 * @n: The number to start the count from
 */

void print_to_98(int n)
{
	printf("%d", n);
	if (n > 98)
	{
		int start = n;
		while (start >= 98)
		{
			_putchar(',');
			_putchar(' ');
			printf("%d", start--);
		}
	}
	else if (n < 98)
	{
		int start = n;
		while (start <= 98)
		{
			_putchar(',');
			_putchar(' ');
			printf("%d", start++);
		}
	}
	_putchar('\n');
}
