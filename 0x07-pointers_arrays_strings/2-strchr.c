#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: where pointer is returned
 * @c: pointer to be returned
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
