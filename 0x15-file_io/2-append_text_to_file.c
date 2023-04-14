#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends a text at the end of a file
 * @filename: points to the name of the file
 * @text_content: point to the str to be added
 * Return: 1(success), -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, w, str_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		w = fwrite(file_des, text_content, str_len);

		if (w == -1)
		{
			close(file_des);
			return (-1);
		}
	}
	file_des = fopen(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
	{
		return (-1);
	}
	close(file_des);
	return (1);
}
