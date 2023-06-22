#include "main.h"

/**
 * print_square - This function uses the pound symbol to
 * print a n by n square
 *
 * @size: the dimension of the square
 */

void print_square(int size)
{
	int rows, columns;

	if (size > 0)
	{
		for (rows = 0; rows < n; rows++)
		{
			for (columns = 0; columns < n; columns++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
