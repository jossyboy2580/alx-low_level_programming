#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: always 0(success)
 */

int main(void)
{
	int i;

	for (i = 57; i >= 48; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
