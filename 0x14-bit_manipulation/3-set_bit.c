#include "main.h"

/**
 * set_bit - This function sets the valie of a bit to 1
 *
 * @n: The number we want to change
 * @index: the index we want to manipulate
 * Return: 1 if it worked and -1 if it didnt
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shifted;

	if (n == NULL)
		return (-1);
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	shifted = 1;
	shifted <<= index;
	*n = *n | shifted;
	if (*n == 0)
		return (-1);
	return (1);
}
