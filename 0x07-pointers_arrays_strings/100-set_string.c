#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char
 *
 * @s: The pointer whose value we want to set
 * @to: The value of the pointer
 */

void set_string(char **s, char *to)
{
	if (s && to)
		*s = to;
}
