#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * move_file - A function that copies the content of a file
 * @src: where we want to copy from
 * @dest: where we will paste it
 * Return: 1 to indicate success
 */

int move_file(char *src, char *dest)
{
	int src_fd, dest_fd;
	int clos_src, clos_des;
	char buf[1024];
	ssize_t read_count;

	src_fd = open(src, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	dest_fd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0662);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
	}
	do {
		read_count = read(src_fd, buf, 1024);
		write(dest_fd, buf, read_count);
	} while (read_count >= 1024);
	clos_src = close(src_fd);
	if (clos_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	clos_des = close(dest_fd);
	if (clos_des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
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
