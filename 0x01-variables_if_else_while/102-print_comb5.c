#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: 0 always(success)
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (i + j < k + l)
					{
						if (i + j > 96 && k + l > 97)
							putchar(' ');
						putchar(i);
						putchat(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i + j < 113 && k + l < 114)
							putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
