#include "main.h"

/**
 * print_times_table - Function to print the times table from
 * 0 to n
 *
 * @n: the upper limit of the multiplication fn
 *
 */

void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int prod;

			prod = i * j;
			if (j != 0)
			{
				if (prod < 10)
					_putchar(' ');
				_putchar(' ');
			}
			if (prod / 10)
				_putchar((prod / 10) + '0');
			_putchar((prod % 10) + '0');
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
