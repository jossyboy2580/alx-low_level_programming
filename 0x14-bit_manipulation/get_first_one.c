#include "main.h"

/**
 * first_one - A function that returns the first position of a
 * one in a binary
 *
 * @n: The int we want to find
 * Return: and int for the position
 */

unsigned long int first_one(unsigned long int n)
{
	unsigned long int first, i;

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		n >>= 1;
		if (n == 0)
			break;
	}
	return (i);
}
