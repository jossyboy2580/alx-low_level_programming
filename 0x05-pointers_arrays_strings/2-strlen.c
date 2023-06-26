#include "main.h"

/**
 * _strlen - This function returns the length of a string
 *
 * @s: A pointer to a string whose length we need
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
