#include <stdio.h>

void first_func() __attribute__((constructor));
/**
 * first_func - Firat function to run
 */

void first_func()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
