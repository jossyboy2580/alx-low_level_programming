#include "main.h"
#include <stddef.h>

/**
 * _strchr - A function that locates a character in a string
 *
 * @s: The string we'll search for the character
 * @c: The character we will search for
 * Return: pointer to the first occurence of c or NULL if
 * c is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
