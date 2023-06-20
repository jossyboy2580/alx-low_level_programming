#include "main.h"

void disp_min(int, int);

/**
 * jack_bauer - This function prints the total time
 * jack bauer has to solve a crime
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 2) || (i == 2 && j < 4))
				disp_min(i, j);
		}
	}
}

/**
 * disp_min - Display the minutes
 *
 * @hr1: first hand of the hour
 * @hr2: second part of the hour
 */

void disp_min(int hr1, int hr2)
{
	int k, l;

	for (k = 0; k < 6; k++)
	{
		for (l = 0; l < 10; l++)
		{
			_putchar(hr1 + '0');
			_putchar(hr2 + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
		}
	}
}
