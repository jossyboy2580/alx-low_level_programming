#include "main.h"

/**
 * _memset - A functiin that fills the first n memory
 * location pointed to s with constant byte
 *
 * @s: The memory space to be filled by the constant byte
 * @b: the constant byte to fill the space with
 * @n: the number of bytes to fill
 * Return: Pointer to the filled memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
