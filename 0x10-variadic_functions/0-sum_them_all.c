#include "variadic_functions.h"

/**
 * sum_them_all - A func that returns the sum of all its parameters
 *
 * @n: The last named parameter
 * Return: The sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end(nums);
	return (sum);
}
