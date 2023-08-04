#include <stdio.h>

/**
 * main - Entry point of a program that prints its own name
 *
 * @argc: Number of commandline arguments used to invoke the
 * program
 * @argv: Array of command line args
 * Return: 0 always successful
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
