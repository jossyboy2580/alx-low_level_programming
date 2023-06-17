#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: always 0(success)
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		printf("Last digit of %d is ", n);
		while (n > 9)
		{
			n / 10;
		}
		printf("%d", n);
		return (0);
}
