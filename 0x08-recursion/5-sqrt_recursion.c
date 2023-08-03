#include "main.h"

long int get_sqrt(long int, long int);
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
	return ((int) get_sqrt((long int) n, (long int) n / 2));
}

/**
 * get_sqrt - Get the square root of n
 *
 * @n: The number we seek the root of
 * @hlf: n divided by 2
 * Return: the sqquare root of n
 */

long int get_sqrt(long int n, long int hlf)
{
	if (hlf < 1)
		return (-1);
	if (hlf * hlf == n)
		return (hlf);
	return (get_sqrt(n, hlf - 1));
}
