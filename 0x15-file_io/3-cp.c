#include "main.h"

#define BUFF_SIZE 1024

int main(int argc, char **argv)
{
	int file_from;
	int file_to;
	ssize_t read_count, write_count;
	char *buffer[BUFF_SIZE];

	if (argc != 3)
	{
		write(2, "Usage: cp file_from file_to\n", 200);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		read_count = read(file_from, buffer, BUFF_SIZE);
		if (read_count == -1)
		{

		}
		write_count = write(file_to, buffer, read_count);
		if (write_count == -1)
		{

		}
	} while (read_count >= 1024);
	return (0);
}
