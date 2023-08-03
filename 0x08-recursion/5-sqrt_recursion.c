#include "main.h"

long get_sqrt(long, long);
/**
 * _sqrt_recursion - Square root calculation
 *
 * @n: We seek the squarr root of this number
 * Return: The sqiare root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return ((int) get_sqrt((long) n, (long) n / 2));
}

/**
 * get_sqrt - Get the square root of n
 *
 * @n: The number we seek the root of
 * @hlf: n divided by 2
 * Return: the sqquare root of n
 */

long get_sqrt(long n, long hlf)
{
	if (hlf < 1)
		return (-1);
	if (hlf * hlf == n)
		return (hlf);
	return (get_sqrt(n, hlf - 1));
}
