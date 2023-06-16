#include <stdio.h>

/**
 * main = The entry point of the program
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %lu", sizeof(char));
	printf("Size of an int: %lu", sizeof(int));
	printf("Size of a long int: %lu", sizeof(long int));
	printf("Size of a long long: %lu", sizeof(long long));
	printf("Size of a long float: %lu", sizeof(long float));
	return (0);
}
