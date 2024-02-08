#include "main.h"

/**
 * flip_bits - Number of bits we need to flip to get one num from
 * the other
 *
 * @m: The first number
 * @n: The second number
 * Return: The number of bits we need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int mask;

	mask = 1;

	while (n != 0 || m != 0)
	{
		if ((n & mask) != (m & mask))
			flips++;
		n >>= 1;
		m >>= 1;
	}
	return (flips);
}
