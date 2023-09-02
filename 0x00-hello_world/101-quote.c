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
	const char *part1 = "and that piece of art is useful";
	const char *part2 = "\" - Dora Korper, 2015-10-19\n";
	write(2, part1, strlen(part1));
	write(2, part2, strlen(part2));
	return (1);
}
