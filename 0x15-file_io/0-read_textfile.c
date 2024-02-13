#include "main.h"

/**
 * read_textfile - A function to read a certain number of letters from a file
 *
 * @filename: The file we want to read from
 * @letters: The number of letters we want to read
 * Return: The number of letters actually read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	ssize_t read_count;
	ssize_t write_count;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
	{
		return (0);
	}
	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
	{
		free(buffer);
		return (0);
	}
	read_count = read(file_des, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		return (0);
	}
	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_des);
	return (write_count);
}
