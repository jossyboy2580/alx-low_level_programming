#include <string.h>
#include "main.h"

/**
 * is_binary - A function to check if a char is a valod binary bit
 *
 * @c: The character to check
 * Return: 1 if it is and 0 if it isnt
 */

int is_binary(char c)
{
	if (c > '1' || c < '0')
		return (0);
	return (1);
}

/**
 * raise - Raise a number to a power
 *
 * @base: the base of the exponentiation
 * @exp: the power
 * Return: The result
 */

unsigned int raise(unsigned int base, int exp)
{
	unsigned int result = 1;
	int i;

	for (i = 0; i < exp; i++)
		result *= base;
	return (result);
}

/**
 * binary_to_uint - This program converts a binary number to an
 * unsigned int
 *
 * @b: The binary number as a string of chars
 * Return: Unsigned int equivalent of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_eqv = 0;
	int i = 0, power;

	if (b)
	{
		power = strlen(b) - 1;
		while (b[i] != '\0')
		{
			if (!is_binary(b[i]))
			{
				decimal_eqv = 0;
				break;
			}
			decimal_eqv += (b[i] - '0') * (raise(2, power--));
			i++;
		}
	}
	return (decimal_eqv);
}
