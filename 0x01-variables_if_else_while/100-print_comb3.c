#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: always 0(success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i < j)
			{
				if (i != 0 && j != 1)
					putchar(' ');
				putchar(i);
				putchar(j);
				if (i != 8 && j != 9)
					putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
