#include "variadic_functions.h"

/**
 * print_numbers - A function to print variable numbers of args
 *
 * @separator: What to use as separatoe
 * @n: The number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int count = 0;

	va_start(nums, n);
	while (count < n)
	{
		printf("%d", va_arg(nums, int));
		if (count != n - 1)
			printf("%s", separator);
		count++;
	}
	printf("\n");
	va_end(nums);
}
