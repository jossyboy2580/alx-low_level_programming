#include "main.h"


void  print_space(int);

/**
 * print_line - a function that prints diagonal using a slash
 *
 * @n: Number of times to print the diagonal
 */

void print_diagonal(int n)
{
	int spce, temp = n;

	if (n > 0)
	{
		while (n)
		{
			spce = temp - n;
			print_space(spce);
			_putchar('\\');
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

/**
 * print_space - a function to print the empty spaces
 *
 * @n: number of empty spaces to print
 */

void print_space(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(' ');
	return;
}
