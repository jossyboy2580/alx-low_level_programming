#include <string.h>
#include "main.h"

/**
 * check_pal - The recursive palindrome checker
 *
 * @start: The first edge of the string
 * @end: The last edge of the string
 *
 * Return: 1 or 0 if it is palindrome or not
 * respectively
 */

int check_pal(char *start, char *end)
{
	if (start == end)
		return (1);
	if (*start == *end)
	{
		if (end - start == 1)
			return (1);
		return (check_pal((start + 1), (end - 1)));
	}
	return (0);
}

/**
 * is_palindrome - A function that calls a recursive palindrome
 * checker
 *
 * @s: The string we want to check if it's a palindrome
 * Return: Either 1 if its a palindrome or
 * 0 if it is not
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (s == NULL)
		return (0);
	return (check_pal(s, (s + (len - 1))));
}
