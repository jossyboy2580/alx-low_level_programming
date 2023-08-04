#include <stdio.h>

/**
 * main - Entry point of a program that prints the number of
 * command line args used to invoke it
 *
 * @argc: Number of commandline args
 * @argv: array of arguments
 * Return: 0 always successsful
 */

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
