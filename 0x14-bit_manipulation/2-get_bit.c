#include "main.h"

/**
 * get_bit - A function to get the bit at a particular index
 *
 * @n: The number to work with
 * @index: The index to search
 * Return: the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int n_cpy;

	mask = 1;
	if ((n_cpy >> index) != 0)
	{
		if (((n >> index) & mask) == 1UL)
			return (1);
		else
			return (0);
	}
	return (-1);
}
