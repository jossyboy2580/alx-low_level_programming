#include <stdio.h>

/**
 * main - Entry point to a program that prints the number of
 * arguments passed to it
 *
 * @argc: The number of arguments passed to the program
 * @argv: The array of arguments passed to the program
 * Return: 0 always successful
 */

int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}
