#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: 0 always(success)
 */

int main(void)
{
	int i, j;
	int k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (k < i)
					continue;
				for (l = 48; l <= 57; l++ )
				{
					if (i >= k && (i + j > k + l))
						continue;
					if (i == k && j == l)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i + j + k + l != 227 || i < j)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
