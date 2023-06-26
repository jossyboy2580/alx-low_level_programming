#include "main.h"

/**
 * puts2 - Funtion that prints every other characternof a string
 *
 * @str: string whose character we will print
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i] + 0);
		i++
	}
}
