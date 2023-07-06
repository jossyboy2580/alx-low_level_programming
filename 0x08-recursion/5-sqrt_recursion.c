#include "main.h"

int get_sqrt(int, int);
/**
 * _sqrt_recursion - Recursive determination of the square root
 * of n
 *
 * @n: The number whose aquare root we seek
 * Return: sqaure root of n
 */

int _sqrt_recursion(int n)
{
	int half;

	half = n;
	return (get_sqrt(n, half));
}

/**
 * get_sqrt - Determine the square root of n
 * @n: we find the sqrt of this number
 * @half: midpoint of n
 * Return: Sqrt of n
 */

int get_sqrt(int n, int half)
{
	if (half == 1)
		return (-1);
	if ((half * half) == n)
		return (half);
	return (get_sqrt(n, half - 1));
}
