#include "main.h"

int get_len(char *, int);
/**
 * _strlen_recursion - Recursively get the length of a
 * string with this function
 *
 * @s: The string whose length we seek
 * Return: The length of s
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	return (get_len(s, len));
}

/**
 * get_len - A function that returns the length of s
 *
 * @s: The string whose length we'll return
 * @len: the length initialized to zero
 * Return: the length of s
 */

int get_len(char *s, int len)
{
	if (*s == '\0')
		return (len);
	len++;
	return (get_len(s + 1, len));
}
