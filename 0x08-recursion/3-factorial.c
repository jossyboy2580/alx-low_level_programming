#include "main.h"

/**
 * factorial - A function to get the factorial of a given number
 *
 * @n: The number whose factorial we seek
 * Return: Factorial of n
 */

int factorial(int n)
{
	if (n < -1)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
