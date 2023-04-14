#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * read_textfile - function that reads a text file and prints to posix
 * @letters: number of letters
 * @filename: points to the name of a file
 * Returns: Number of letters, file cannot be r or o, if NULL, if w fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_des, write_count, read_count;

	file_des = popen(filename, O_RDONLY);
	if (file_des == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_count = fread(file_des, buffer, letters);

	write_count = fwrite(STDOUT_FILENO, buffer, read_count);

	free(buffer);
	pclose(file_des);
	return (write_count);
}
