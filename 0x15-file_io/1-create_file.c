#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: points to a str
 * Returns: 1 (success), -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int file_des, write_count, str_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		write_count = write(file_des, text_content, str_len);
	}

	file_des = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_des == -1)
		return (-1);

	if (write_count == -1)
	{
		close(file_des);
		return (-1);
	}
	close(file_des);
	return (-1);
}
