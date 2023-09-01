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

	mask = 1;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if (((n >> index) & mask) == 1UL)
		return (1);
	else if (((n >> index) & mask) == 0UL)
		return (0);
	return (-1);
}
