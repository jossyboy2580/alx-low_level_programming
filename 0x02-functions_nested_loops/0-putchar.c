#include "main.h"

/**
 * main - The entry point to a program that prints the character putchar
 * using the _putchar function
 *
 * Return: always 0(success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
	return (0);
}
