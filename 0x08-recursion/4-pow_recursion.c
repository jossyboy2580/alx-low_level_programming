#include "main.h"

/**
 * _pow_recursion - Raise x to the power of y recursively
 *
 * @x: The number we want to raise
 * @y: the power we are raising to
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
