#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - A function to create files using the open system
 * call
 *
 * @filename: The name of the file we want to create
 * @text_content: The content of the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int new_file, written = 0;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	if (new_file == -1)
		return (-1);
	if (text_content != NULL)
	{
		written = write(new_file, text_content, strlen(text_content));
		if (written == -1)
			return (-1);
	}
	return (1);
}
