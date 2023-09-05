#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - A function to read text from a file
 *
 * @filename: The name of the file we wish to read
 * @letters: The number of letters we are to read
 * Return: the number of written letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int my_file = open(filename, O_RDONLY);
	char *words;

	words = malloc(sizeof(char) * (letters + 1));
	if (words == NULL)
		return (-1);
	read(my_file, words, letters);
	return (write(1, words, letters));
}
