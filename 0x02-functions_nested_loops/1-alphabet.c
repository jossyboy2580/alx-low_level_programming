#include "main.h"

/**
 * print_alphabet - The entry point to a program that
 * prints all lower case letters
 * using the _putchar function
 *
 * Return: always 0(success)
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
