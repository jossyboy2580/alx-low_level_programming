#include "main.h"

/**
 * rev_string - Reverse a string with this function
 *
 * @s: The string we want to reverse
 */

void rev_string(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
		len++;
	char *rev = s;
	for (i = 0; i < len; i++)
	{
		*(rev + i) = s[len - (i + 1)];
	}
	for (i = 0; i < len; i++)
		*(s + i) = rev[i];
	
}
