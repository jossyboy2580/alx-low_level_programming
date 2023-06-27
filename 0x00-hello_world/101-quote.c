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
	const char *message = "and that piece of art is useful\" - Dora Korper, 2015-10-19\n";
	write(2, message, strlen(message));
	return (1);
}
