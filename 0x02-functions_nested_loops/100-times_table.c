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
	if (n <= 15 && n > 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int prod, temp, rem, div = 100;

				prod = i * j;
				temp = prod;
				if (j != 0)
				{
					while (temp < 1000)
					{
						_putchar(' ');
						temp *= 10;
					}
				}
				while (prod)
				{
					rem = prod % div;
					prod = prod / div;
					if (prod)
						_putchar(prod + '0');
					prod = rem;
					div = div / 10;
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
