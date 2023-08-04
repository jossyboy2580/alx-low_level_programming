#include <stdio.h>

/**
 * main - Entry point to a function that prints all args
 *
 * @argc: Number of cmd line args
 * @argv: Array of cmd line args
 * Return: 0 always successful
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
