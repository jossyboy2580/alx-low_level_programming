#include <stdio.h>
#include <errno.h>

/**
 * main - The entry point of a program that prints to
 * the standard error without using functions like fprintf
 * fputs etc
 *
 * Return: 1(success)
 */

int main(void)
{
	errno = 1;
	perror("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (errno);
}
