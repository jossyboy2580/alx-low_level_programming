#include "main.h"

/**
 * print_triangle - function to print a right angled
 * triangle of size size
 *
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int pound = 1;
		int space, count;

		while (pound <= size)
		{
			space = size - pound;

			for (count = 0; count < space; count++)
				_putchar(' ');
			for (count = 0; count < pound; count++)
				_putchar('#');
			_putchar('\n');
			pound++;
		}
	}
	else
		_putchar('\n');
}
