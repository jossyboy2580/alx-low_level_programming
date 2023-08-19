#include "variadic_functions.h"
#include <stdlib.h>

/**
 * is_valid_param - A function to check if a given parameter is amon
 * g the permitted ones
 *
 * @pa: the char we want to check
 */

int is_valid_param(char *pa)
{
	char *param_type = "cisf";

	while (*param_type != '\0')
	{
		if (*pa == *param_type)
			return (1);
		param_type++;
	}
	return (0);
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
	unsigned int i = 0;

	word = malloc(sizeof(char) * 98);
	va_start(params, format);
	while (format[i] != '\0')
	{
		if (is_valid_param(format[i]))
		{
			switch (format[i])
			{
				case ('c')
				{
					printf("%c", va_arg(params, char) + '0');
				}
				case ('i')
				{
					printf("%d", va_arg(params, int));
				}
				case ('f')
				{
					printf("%f", va_arg(params, float));
				}
				case ('s')
				{
					word = va_arg(params, char *);
					if (!word)
						word = "(nil)";
					printf("%s", word);
				}
			}
		}
		if (i == strlen(format) - 1)
			printf(", ");
		i++;
	}
	va_end(params);
	printf("\n");
}
