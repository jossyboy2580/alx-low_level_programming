#include "main.h"

/**
 * check_prime - The recursive checker for primality
 *
 * @n: The number we are testing for primality
 * @cur: The present divider, always incremented by one
 * Return: 1 if it is prime and 0 if it is not
 */

int check_prime(int cur, int n)
{
	if (n < 4 && n > 1)
		return (1);
	if (cur > (n / 2))
		return (1);
	if (n % cur == 0)
	{
		return (0);
	}
	return (check_prime(++cur, n));
}

/**
 * is_prime_number - A function to check if a given int is prime
 *
 * @n: The number we want to test for primality
 * Return: 1 if it is prime and 0 if it is not
 */

int is_prime_number(int n)
{
	return (check_prime(2, n));
}
