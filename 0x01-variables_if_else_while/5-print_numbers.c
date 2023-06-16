#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: always 0(success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putc(i);
	putchar('\n');
	return (0);
}
