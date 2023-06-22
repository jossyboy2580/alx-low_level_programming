#include "main.h"

/**
 * more_numbers - Print the numbers from 0 to 14
 * ten times to the standard output
 */

void more_numbers(void)
{
	int c = 0, quotient, remainder;

	while (c < 15)
	{
		quotient =  c / 10;
		remainder = c % 10;

		if (quotient)
		{
			_putchar(quotient + '0');
			_putchar(remainder + '0');
		}
		else
			_putchar(remainder + '0');
		c++;
		if (c == 16)
		{
			_putchar('\n');
			c = 0;
		}
	}
}
