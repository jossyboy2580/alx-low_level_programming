#include "main.h"

/**
 * _isdigit - a function that checks if input is a digit
 *
 * @c: the ascii code of the number to be checked
 *
 * Return: 1 if is uppercase
 * 0 if otherwise
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
