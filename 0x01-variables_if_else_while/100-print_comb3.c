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
				if (i + j > 97)
					putchar(' ');
				putchar(i);
				putchar(j);
				if (i + j < 113)
					putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
