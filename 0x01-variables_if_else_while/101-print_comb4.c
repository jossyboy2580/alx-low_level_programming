#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: always 0(success)
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i <= 55; i++)
	{
		for (j = 49; j <= 56; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i < j && j < k && i < k)
				{
					if (i + j + k > 147)
						putchar(' ');
					putchar(i);
					putchar(j);
					putchar(k);
					if (i + j + k < 168)
						putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
