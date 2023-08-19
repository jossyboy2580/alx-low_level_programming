#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - A function that prints strings
 *
 * @separator: What separates each entry
 * @n: The number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list words;
	char *present;

	if (separator == NULL)
		separator = "";
	va_start(words, n);
	present = malloc(sizeof(char *) * 98);
	if (!present)
		return;
	while (count < n)
	{
		present = va_arg(words, char *);
		if (!present)
			present = "(nil)";
		printf("%s", present);
		if (count != n - 1)
			printf("%s", separator);
		count++;
	}
	va_end(words);
	printf("\n");
}
