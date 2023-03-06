#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer to returned
 * @accept: pointer to be returned
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
