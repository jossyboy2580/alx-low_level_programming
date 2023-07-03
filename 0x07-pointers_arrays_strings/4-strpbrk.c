#include "main.h"

/**
 * _strpbrk - A function to locate the first occurence of
 * string accept in string s
 *
 * @s: The string to search through
 * @accept: the string whose byte we want to locate
 * Return: the address of the first occurence of a byte in accept
 * present in s, if none is found return NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		int j = 0;

		while (*(accept + j) != '\0')
		{
			if (*(accept + j) == *(s + i))
				return ((s + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
