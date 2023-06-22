#include <stdio.h>

/**
 * main - A fizzbuzz program to 100
 *
 * Return: 0 always
 */

int main(void);
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 && i % 5)
			printf("FizzBuzz");
		else if (i % 3)
			printf("Fizz");
		else if (i % 5)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
