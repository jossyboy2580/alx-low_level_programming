#include <stdio.h>

/**
 * main -Entry point to a function that lists all its arguments
 *
 * @argc: Number of arguments
 * @argv: Array of elements
 * Return: 1 always successful
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
