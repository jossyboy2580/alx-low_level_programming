#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Return:always 0(success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (i = 65; i <= 90; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
