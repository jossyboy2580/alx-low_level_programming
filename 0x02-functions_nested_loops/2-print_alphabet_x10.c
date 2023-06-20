#include "main.h"

/**
 * print_alphabet - The entry point to a program
 * that print lowercase letters ten times
 * using the _putchar function
 *
 * Return: always 0(success)
 */

void print_alphabet_x10(void)
{
	int i = 97, count;

	for (count = 0; count < 10; count++)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
