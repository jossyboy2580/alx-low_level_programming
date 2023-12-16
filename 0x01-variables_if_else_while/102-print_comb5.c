#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return: 0 always(success)
 */

int main(void)
{
	int i = 48, j = 48;
	int k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			k = i;
			l = j + 1;
			while (k <= 57)
			{
				while (l <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i +j + k + l != 227)
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				k++;
			}
		}
	}
	putchar('\n');
	return (0);
}
