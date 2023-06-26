#include "main.h"

/**
 * puts_half - This function prints the second half of a strimg
 *
 * @str: The string we want to print from
 */

void puts_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;

	n = len / 2;
	if (len % 2 != 0)
		n = (len + 1) / 2;

	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
