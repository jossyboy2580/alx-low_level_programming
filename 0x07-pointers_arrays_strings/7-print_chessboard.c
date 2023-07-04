#include "main.h"

/**
 * print_chessboard - Print out the chessboard
 *
 * @a: an n by 8 matrics
 * @n: the number of rows
 */

void print_chessboard(char (*a)[n][8])
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		int j = 0;

		while (j < 8)
		{
			_putchar(a[i][j] + 0);
			j++;
		}
		_putchar('\0');
	}
}
