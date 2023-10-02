#include "main.h"
#include <stdio.h>

int move_file(char *src, char *dest)
{
	int src_fd, dest_fd;
	char buf[1024];
	ssize_t read_count, write_count;

	src_fd = open(src, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	dest_fd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest)
	}
}

/**
 * main - Entry point of the program
 * @ac: Argument count from the cli
 * @av: Argument vector from the cli
 * Return: 1 on success
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	moved = move_file(av[1], av[2]);
}
