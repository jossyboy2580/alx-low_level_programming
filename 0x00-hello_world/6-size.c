#include <stdio.h>

/**
 * main = The entry point of the program
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %d", (int) sizeof(char));
	printf("Size of an int: %d", (int) sizeof(int));
	printf("Size of a long int: %d", (int) sizeof(long int));
	printf("Size of a long long: %d", (int) sizeof(long long));
	printf("Size of a long float: %d", (int) sizeof(long float));
	return (0);
}
