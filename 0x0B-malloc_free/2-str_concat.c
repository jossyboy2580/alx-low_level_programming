#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 *
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, len_both = 0, i;
	char *new;

	if (s1 != NULL)
	{
		while (s1[len_s1] != '\0')
			len_s1++;
	}
	else
	{
		len_s1 = 0;
	}
	if (s2 != NULL)
	{
		while (s2[len_s2] != '\0')
			len_s2++;
	}
	else
	{
		len_s2 = 0;
	}
	len_both = len_s1 + len_s2;
	new = malloc(sizeof(char) * (len_both + 1));
	if (new == NULL)
		return (NULL);
	if (len_s1 > 0)
	{
		for (i = 0; i < len_s1; i++)
			new[i] = s1[i];
	}
	if (len_s2 > 0)
	{
		for (i = len_s1; i < len_both; i++)
			new[i] = s2[i - len_s1];
	}
	new[len_both] = '\0';
	return (new);
}
