#include "main.h"

/**
 * _strcat - A function to concatenate two strings
 *
 * @dest: The destination of the concatenation operation
 * @src: Where we'll copy the second string from
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0, j = 0;

	while (dest[len] != '\0')
		len++;
	for (i = len; src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
