#include <string.h>
#include "main.h"

int check_pal(char *start, char *end)
{
	if (start == end)
		return (1);
	if (*start == *end)
	{
		if (end - start == 1)
			return (1);
		return (check_pal((start + 1), (end - 1)));
	}
	return (0);
}

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (s == NULL)
		return (0);
	return (check_pal(s, (s + (len - 1))));
}
