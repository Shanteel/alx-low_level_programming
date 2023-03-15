#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *xxx;
	int s, t = 0;

	if (str == NULL)
		return (NULL);

	s = 0;
	while (str[s] != '\0')
		s++;

	xxx = malloc(sizeof(char) * (s + 1));

	if (xxx == NULL)
		return (NULL);

	for (t = 0; str[t]; t++)
		xxx[t] = str[t];
	return (xxx);
}
