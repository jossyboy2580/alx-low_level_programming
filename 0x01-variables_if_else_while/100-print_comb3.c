#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: always 0(success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i < j)
			{
				if (i != 48 && j != 49)
					putchar(' ');
				putchar(i);
				putchar(j);
				if (i != 56 && j != 57)
					putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
