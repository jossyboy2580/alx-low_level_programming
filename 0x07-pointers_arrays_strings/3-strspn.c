#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 *
 * @s: The string to be traversed
 * @accept: The string to check bytes against
 * Return: the number of bytes from s that is in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, count = 0;

	while (*(s + i) != '\0')
	{
		int j = 0, appear = 0;

		while (accept[j] != '\0')
		{
			if (*(s + i) == accept[j])
			{
				appear++;
				break;
			}
			j++;
		}
		if (appear == 0)
			break;
		count++;
		i++;
	}
	return (count);
}
