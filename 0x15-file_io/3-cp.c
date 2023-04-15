#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - allocates 1024 bytes to a buffer
 * @filename: string of characters are stored by a buffer
 * Return: pointer to a buffer
 */

char *create_buffer(char *filename)
{
	char *buf;


	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}

/**
 * main - program that copies the content of a file to another file
 * @argc: argument count
 * @argv: point to the argument
 * Return: o(success)
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(from, buf, 1024)) > 0)
	{
		w = write(to, buf, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[2]);
			exit(99);
		}
	}
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
