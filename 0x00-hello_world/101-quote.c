#include <unistd.h>
#include <string.h>

/**
 * main - The entry point of a program that prints to
 * the standard error without using functions like fprintf
 * fputs etc
 *
 * Return: 1(success)
 */

int main(void)
{
	write(2, "and that piece of art is useful", 31);
	write(2, "\" - Dora Korpar, 2015-10-19\n", 28);
	return (1);
}
