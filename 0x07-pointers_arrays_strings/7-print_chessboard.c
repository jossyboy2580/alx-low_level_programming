#include "main.h"

/**
 * print_chessboard - Print out the chessboard
 *
 * @a: an n by 8 matrics
 * @n: the number of rows
 */

void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i < 8; i++)
	{
		int j = 0;

		while (j < 8)
		{
			_putchar(a[i][j] + 0);
			j++;
		}
		_putchar('\n');
	}
}
