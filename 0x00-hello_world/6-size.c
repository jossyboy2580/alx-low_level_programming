#include <stdio.h>

/**
 * main = The entry point of the program
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %d", sizeof(char));
	printf("Size of an int: %d", sizeof(int));
	printf("Size of a long int: %d", sizeof(long int));
	printf("Size of a long long: %d", sizeof(long long));
	printf("Size of a long float: %d", sizeof(long float));
	return (0);
}
