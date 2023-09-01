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
	char *s;
	int i = 0;

	asprintf(s, "%b\n", n);
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
