#include <stdio.h>

int is_prime(int n);

/**
 * main - The entry point of a program that finds
 * the prime factors of a number
 *
 * Return: 0 always successful
 */

int main(void)
{
	unsigned long n = 612852475143, i;
	unsigned long upper = n /2;

	for (i = 2; i < upper; i++)
	{
		if (is_prime(i))
		{
			printf("i found a prime %lu", i);
			while (n % i == 0)
			{
				printf("%lu", i);
				n = n / i;
				if (n != 1)
					printf(",");
			}
		}
	}
	return (0);
}

/**
 * is_prime - function to check if a number is prime
 *
 * @n: number we want to check
 * Return: either 1 if it is a prime
 * or 0 if it is not
 */

int is_prime(int n)
{
	int i;
	if (n == 2)
		return (1);

	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
