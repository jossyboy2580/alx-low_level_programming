#include "main.h"

/**
 * _memcpy - this function copies n bytes from mem area
 * src to mem area dest
 *
 * @dest: The destination of the memcpy operation
 * @src: Where to copy the bytes from
 * @n: number of bytes to copy
 * Return: Pointer to the dest mem area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
