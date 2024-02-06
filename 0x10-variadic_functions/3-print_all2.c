#include <stdio.h>
#include "variadic_functions.h"

typedef struct {
	char *c : "char";
	char *i : "int";
	char *s : "char *";
	char *f : "float";
} type_map;


void print_char(char c)
{
	printf("%c\n", c);
}

void print_string(char *str)
{
	if (str == NULL)
		printf("nil\n");
	else
		printf("%s\n", str);
}

void print_int(int dig)
{
	printf("%d\n", dig);
}

void print_float(double float_val)
{
	printf("%f\n", float_val);
}

void match_function(va_list val, char c)
{
/*	functions_struct->c(va_arg(val, c)); */
}

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char c;
	char *allowed = "cisf";

	while (c = format[i] != '\0')
	{
		while (allowed[j] != '\0')
		{
			if (c == allowed[j])
			{
	/*			match_function(va_copy(va_list), c); */
				printf("%s\n", type_map.c);
			}
		}
	}
}

int main(void)
{
	print_all("csif", "ccisnfj");
	return (0);
}
