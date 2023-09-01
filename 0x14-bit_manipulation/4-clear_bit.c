#include "main.h"

/**
 * clear_bit - A function to set the bit ay a paticular index to 0
 *
 * @n: A pointer to the n we want to work on
 * @index: the index we are working on
 * Return: 1 if siccessful and -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shift;

	shift = 1;
	shift <<= index;
	shift = ~shift;
	*n = *n & shift;
	return (1);
}
