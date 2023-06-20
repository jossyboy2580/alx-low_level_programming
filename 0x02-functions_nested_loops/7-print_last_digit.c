#include "main.h"

/**
 * print_last_digit - Print the last digit of a function
 *
 * @n: The number whose last digit we need
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit = (n - ((n / 10) * 10));

	_putchar(last_digit);
	return (last_digit);
}
