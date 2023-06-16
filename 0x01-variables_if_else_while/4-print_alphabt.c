#include <stdio.h>

/**
 * main - The entry point of the  program
 *
 * Return: always 0(success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
