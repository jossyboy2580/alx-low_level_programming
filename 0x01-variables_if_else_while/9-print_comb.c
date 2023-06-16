#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: always 0(success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 48)
			putchar(' ');
		putchar(i);
		if (i != 57)
			putchar(',');
	}
	putchar('\n');
	return (0);
}
