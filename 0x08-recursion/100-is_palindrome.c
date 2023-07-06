#include "main.h"
#include <string.h>

int check_palindrome(char *s, int start, int width);
/**
 * is_palidrome - A function to check if a string is a palidrome
 *
 * @s: A string to check if its palindrome
 * Return: 1 if its palindrome 0 if its not
 */

int is_palindrome(char *s)
{
	int width = strlen(s);

	if (width <= 1)
		return (1);
	return (check_palindrome(s, 0, width - 1));
}

/**
 * check_palindrome - Is it palindrome
 * @s: String to check
 * @width: width of the string
 * Return: 1 if palidrone 0 if not
 */

int check_palindrome(char *s, int start,int end)
{
	if ((start >= end))
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}
