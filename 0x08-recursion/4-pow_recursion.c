#include "main.h"

/**
 * _pow_recursion - Recursive calculation of tbe power
 * of x to y
 *
 * @x: The number to raise
 * @y: what x is raised to
 * Return: thw value of x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
