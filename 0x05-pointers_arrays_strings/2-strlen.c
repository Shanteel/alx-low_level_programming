#include <stdio.h>

/**
 * _strlen - function that return the length of a string
 * @str: string length to be returned
 * Return: length of str
 */
size_t  _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
