#include "main.h"

/**
 * string_toupper - A function that converts lower case occurence to their
 * upper case equivalent
 *
 * @s: the string we will convert
 * Return: pointer to the string
 */

char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s <= 122 && *s >= 97)
			*s = *s - 32;
		s++;
	}
	return (s);
}
