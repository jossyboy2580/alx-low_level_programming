#include "main.h"

/**
 * times_table - Function to print the times table from
 * 0 to 9
 *
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
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
