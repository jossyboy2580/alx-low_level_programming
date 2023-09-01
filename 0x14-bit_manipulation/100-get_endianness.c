#include "main.h"

/**
 * get_endianness - A function to get the endianess of a system
 *
 * Return: 1 if it is a large endian and 0 of it isnt
 */

int get_endianness(void)
{
	int i = 1;

	i >>= 1;
	if (i == 0)
		return (1);
	return (0);
}
