#include "main.h"

/**
 * print_diagonal - This function printa diagonals
 *
 * @n: parameter representing how many levels of diagonal to print
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n < 1)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			int j;

			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			if (i > 0)
			{
				_putchar('\\');
				_putchar('\n');
			}
			i++;
		}
	}
}
