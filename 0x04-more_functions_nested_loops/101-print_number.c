#include "main.h"

/**
 * dig_count - A function to count how many digits are
 * present in a number
 *
 * @n: The number we want to check
 * Return: Number of digits present
 */

int dig_count(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

/**
 * powerer - A function to raise ten to a certain power
 * according to nu of digits
 *
 * @digits: How many digits are in the number, meaning
 * the power to raise ten to
 * Return: The powered version of the base
 */

int powerer(int digits)
{
	int i;
	int identity = 1;

	for (i = 1; i < digits; i++)
	{
		identity *= 10;
	}
	return (identity);
}

/**
 * print_number - A function to print some numbers
 *
 * @n: the number we want to print
 */

void print_number(int n)
{
	int digits, dig, i, powered, negative = 0;

	if (n == 0)
	{
		_putchar('0' + n);
		return;
	}
	if (n < 0)
	{
		negative = 1;
		_putchar('-');
		if (n == -1)
			n = 0;
		else
			n = -1 * (n + 1);
	}
	digits = dig_count(n);
	powered = powerer(digits);
	for (i = 0; i < digits; i++)
	{
		dig = n / powered;
		n = n % powered;
		powered /= 10;
		if (i == digits - 1 && negative)
			dig++;
		_putchar('0' + dig);
	}
}
