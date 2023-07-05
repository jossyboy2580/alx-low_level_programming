#include "main.h"

int prime_check(int, int);
/**
 * is_prime_number - Function to know if a number is a prime number
 *
 * @n: The number whose prime i seek
 * Return: 1 if n is prime and 0 if it is not
 */

int is_prime_number(int n)
{
	int half;

	half = n / 2;
	return (prime_check(n, half));
}

/**
 * prime_check - prime checker
 *
 * @num: The number to check
 * @half: Middle of the number
 * Return: 1 if prime and 0 if not
 */

int prime_check(int num, int half)
{
	if (half == 1)
		return (1);
	if (num % half == 0)
		return (0);
	return (prime_checker(num, half - 1);
}
