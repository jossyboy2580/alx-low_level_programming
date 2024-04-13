#include "main.h"

#define BUFF_SIZE 1024

/**
 * transfer_files - A function to transfer files between two
 * open file descriptors
 *
 * @buffer: The holder for the stream of text we want to
 * transfer
 * @file_from: File descriptor for the source of the content
 * @file_to: File descriptor for the destination of the content
 * @argv: List of strings holding the name of the source and destination
 */

void transfer_files(char *buffer, int file_from, int file_to, char **argv)
{
	ssize_t read_count, write_count;

	do {
		read_count = read(file_from, buffer, BUFF_SIZE);
		if (read_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_count = write(file_to, buffer, read_count);
		if (write_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (read_count >= 1024);
}

/**
 * main - The entry point of a program that copies the content
 * of one file to another
 *
 * @argc: The number of command line arguments used to invoke the program
 * @argv: An array of the command line arguments
 * Return: 1 always successful unles the program exits
 */

int main(int argc, char **argv)
{
	int file_from, file_to;
	int closed_read, closed_write;
	char buffer[BUFF_SIZE];

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	transfer_files(buffer, file_from, file_to, argv);
	closed_read = close(file_from);
	if (closed_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	closed_write = close(file_to);
	if (closed_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
