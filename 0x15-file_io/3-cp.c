#include <stdio.h>
#include <string.h>

int copy_file(char *, char *);

/**
 * main - The entry point of the program
 *
 * @argc: the number of arguments used to invoke the
 * program
 * @argv: Array of arguments
 * Return: always 0 for success
 */

int main(int argc, char **argv)
{
	char *src, *dest;

	if (argc != 3)
	{
		write(3, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	src = argv[1];
	dest = argv[2];
	return (0);
}

/**
 * copy_file - A function to copy one file to another
 *
 * @from: The source of the content
 * @to: the destination of the content
 * Return: Thw status of the operation
 */

int copy_file(char *from, char *to)
{
	int src_fd, dest_fd;
	char *buffer[1024];
	int read_count = 1024;

	src_fd = open(from, O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	dest_fd = open(to, O_WRONLY | O_CREAT | O_TRUNC, 00600 | 00060 | 00004);
	if (dest_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		exit(99);
	}
	while (read_count >= 1024)
	{
		read_count = read(src_fd, buffer, 1024);
		write(dest_fd, buffer, read_count);
	}
	close_flag_1 = close(src_fd);
	if (close_flag_1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	close_flag_2 = close(dest_fd);
	if (close_flag_2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", dest_fd);
		exit(100);
	}
	return (1);
}
