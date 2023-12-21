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
	int i, j, temp, prod, rem;
	int divider;
	int seen;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				divider = 1000;
				seen = 0;
				while (divider)
				{
					temp = prod / divider;
					rem = prod % divider;
					divider /= 10;
					if (temp != 0)
					{
						seen = 1;
						_putchar('0' + temp);
					}
					if (temp == 0 && (seen || divider == 0))
					{
						_putchar('0' + temp);
					}
					if (temp == 0 && !seen && divider != 0 && j != 0)
					{
						_putchar(' ');
					}
					prod = rem;
				}
				if (j != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
