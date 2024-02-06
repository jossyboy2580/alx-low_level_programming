#include "main.h"

/**
 * rev_string - Reverse a string with this function
 *
 * @s: The string we want to reverse
 */

void rev_string(char *s)
{
	int len = 0, i, half;
	char temp;

	while (s[len] != '\0')
		len++;

	half = len / 2;
	if (len % 2 != 0)
		half = (len - 1) / 2;
	for (i = 0; i < half; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (len - (i + 1)));
		*(s + (len - (i + 1))) = temp;
	}
}
