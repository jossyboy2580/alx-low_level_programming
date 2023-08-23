#include "3-calc.h"

/**
 * op_add - Return the sum of a and b
 * @a: First num
 * @b: Second num
 * Return: The sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return a minus b
 * @a: First num
 * @b: Second num
 * Return: The difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the product of a and b
 * @a: First num
 * @b: Second num
 * Return: The product
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return a divided by b
 * @a: First num
 * @b: Second num
 * Return: a div by b
 */


int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Return the remainder of a div by b
 * @a: First num
 * @b: Second num
 * Return: The remainder of a / b
 */


int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	 }
	return (a %  b);
}
