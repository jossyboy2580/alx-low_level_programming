#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: always 0(success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\0');
	return (0);
}
