#include "main.h"

int _strlen(char *s);
/**
 * print_rev - A function that prints a string in reverse
 *
 * @s: the string to be peinted in reverse
 */

void print_rev(char *s)
{
	int strln = _strlen(s) - 1;

	while (strln >= 0)
	{
		_putchar(s[strln] + 0);
		strln--;
	}

}

/**
 * _strlen - aget the length of the string
 *
 * @s: we need the length of this!
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
