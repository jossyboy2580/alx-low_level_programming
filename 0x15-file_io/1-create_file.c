#include "main.h"
#include <string.h>

/**
 * create_file - A function to create a file
 *
 * @filename: the name of the file we want to create
 * @text_content: The content well put into the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_des;

	if (filename == NULL)
		return (-1);
	file_des = open(filename, O_WRONLY|O_CREAT|O_TRUNC, 0600);
	if (file_des == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write(file_des, text_content, strlen(text_content));
	}
	close(file_des);
	return (1);
}
