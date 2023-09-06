#include <unistd.h>
#include <fcntl.h>

/**
 *  * read_textfile - A function to read text from a file
 *   *
 *    * @filename: The name of the file we wish to read
 *     * @letters: The number of letters we are to read
 *      * Return: the number of written letters
 *       */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file = open(filename, O_RDONLY);
	char buffer[1024];
	ssize_t bytes_read;

	if (my_file == -1)
	{
		return -1;
	}
	bytes_read = read(my_file, buffer, letters);
	buffer[bytes_read + 1] = '\0';
	return (write(1, buffer, bytes_read));
}
