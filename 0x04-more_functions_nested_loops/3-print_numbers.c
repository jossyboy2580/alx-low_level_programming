#include "main.h"

/**
 * print_numbers - A function that prints the number from
 * zero(0) to nine(9)
 */

void print_numbers(void)
{
	int c = 0;

	while (c < 10)
		_putchar(c++ + '0');
	_putchar('\n');
}
