#include <stdio.h>

/**
 * main - Entry point of a program that prints its own name
 *
 * @argc: Number of arguments used to invoke the program
 * @argv: An array of command line arguments used to call the 
 * program
 * Return: 0 to indicate successful execution
 */

int main(int argc, char **argv)
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
