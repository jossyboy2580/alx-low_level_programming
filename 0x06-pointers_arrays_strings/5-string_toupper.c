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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >= 97)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
