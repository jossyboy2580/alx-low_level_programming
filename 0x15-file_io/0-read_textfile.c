#include "main.h"

/**
 * read_textfile - A function that reads a text file
 *
 * @filename: The name of the file to read
 * @letters: How many characters to read
 * Return: The number of characters actually read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_count = 0;
	ssize_t write_count = 0;
	char reading[1024];
	int file_id;

	if (filename == NULL)
		return (write_count);
	file_id = open(filename, O_RDONLY);
	if (file_id != -1)
	{
		read_count = read(file_id, reading, letters);
		if (read_count != -1)
		{
			write_count = write(STDOUT_FILENO, reading, read_count);
		}
	}
	close(file_id);
	return (write_count);
}
