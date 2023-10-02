#include "main.h"

/**
 * append_text_to_file - A function that appends text to the end of
 * a file
 *
 * @filename: The file we want to append text to
 * @text_content: The tezt we want to append
 * Return: 1 if successful and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t write_count;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);
	if (text_content != NULL)
	{
		write(file_des, text_content, strlen(text_content));
		if (write_count == -1)
			return (-1);
	}
	return (1);
}
