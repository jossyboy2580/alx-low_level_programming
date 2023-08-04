#include "main.h"

/**
 * _abs - This function returns the absolute number
 * of a given input
 *
 * @n: The number whose absolute number we want to check
 * Return: the always positive absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
