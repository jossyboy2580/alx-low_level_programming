#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int move_file(char *src, char *dest)
{
	int src_fd, dest_fd;
	char buf[1024];
	ssize_t read_count;

	src_fd = open(src, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	dest_fd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0466);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
	}
	do
	{
		read_count = read(src_fd, buf, 1024);
		write(dest_fd, buf, read_count);
	}
	while (read_count >= 1024);
	return (1);
}

/**
 * main - Entry point of the program
 * @ac: Argument count from the cli
 * @av: Argument vector from the cli
 * Return: 1 on success
 */

int main(int ac, char **av)
{
	int moved;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	moved = move_file(av[1], av[2]);
	if (!moved)
		return (-1);
	return (1);
}
