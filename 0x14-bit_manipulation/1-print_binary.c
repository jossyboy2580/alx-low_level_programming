#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_binary - A function to print the binary representation
 * of a number n
 *
 * @n: The number whose binary we want to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, n_cpy = n;
	unsigned long int i, first_one;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		n_cpy >>= 1;
		if (n_cpy == 0)
			break;
	}
	first_one = i;
	for (i = first_one + 1; i > 0; i--)
	{
		if ((n >> (i - 1)) & mask)
			_putchar('1');
		else
			_putchar('0');
	}
}
