#include "main.h"

/**
 * _strncat - Copy n bytes from src to dest
 *
 * @src: the source from which we will copy
 * @dest: the destination of the concatenation
 * Return: the pointer to the destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i, j = 0;

	while (dest[len] != '\0')
		len++;
	for (i = len; src[j] != '\0'; i++)
	{
		if (j == n)
			break;
		dest[i] = src[j];
		j++
	}
	dest[i] = '\0';
	return (dest);
}
