#include "main.h"

/**
 * _strncpy - A function that copies n bytes from src
 * to dest
 *
 * @dest: The destination of our copy operation
 * @src: where we'll copy the bytes from
 * @n: Number of bytes to copy
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i])
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
