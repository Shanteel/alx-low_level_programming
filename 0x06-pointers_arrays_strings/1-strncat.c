#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string to be appended
 * @src: string to be appended
 * @n: number of bytes from src to be appended to dest
 *
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
