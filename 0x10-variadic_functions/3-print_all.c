#include "variadic_functions.h"
#include <stdlib.h>

/**
 * show_c - Print a char arg
 *
 * @val: variadic list
 */

void show_c(va_list val)
{
	printf("%c", va_arg(val, int));
}

/**
 * show_c - Print a char arg
 *
 * @val: variadic list
 */

void show_i(va_list val)
{
	printf("%d", va_arg(val, int));
}

/**
 * show_c - Print a char arg
 *
 * @val: variadic list
 */

void show_f(va_list val)
{
	printf("%f", va_arg(val, double));
}

/**
 * show_c - Print a char arg
 *
 * @val: variadic list
 */

void show_s(va_list val)
{
	char *str = va_arg(val, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 * print_all - A function that prints anything
 *
 * @formt: A list of formats
 */

void print_all(const char * const format, ...)
{
	va_list params;
	char *word;
	void (*fns[])(va_list) = {show_c, show_i, show_f, show_s};
	char *allowed = "cifs";
	unsigned int i, j;
	int valid;

	va_start(params, format);
	i = 0;
	while (format[i] != '\0')
	{
		j = 0;
		valid = 0;
		while (allowed[j] != '\0')
		{
			if (format[i] == allowed[j])
			{
				valid = 1;
				fns[j](params);
			}
			j++;
		}
		if ((i < strlen(format) - 1) && valid)
			printf(", ");
		i++;
	}
	va_end(params);
	printf("\n");
}
