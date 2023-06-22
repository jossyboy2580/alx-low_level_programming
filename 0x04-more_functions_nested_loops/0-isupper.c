#include "main.h"

/**
 * _isupper - a function that checks for upper case
 * character
 *
 * @c: the ascii code of the number to be checked
 *
 * Return: 1 if is uppercase
 * 0 if otherwise
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
