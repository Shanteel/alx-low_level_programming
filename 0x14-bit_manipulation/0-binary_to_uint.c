#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: point to the strinf of chars
 * Return: conerted number, 0 if shar is more than 1and b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		num = (num << 1) + (*b++ -'0');
	}
	return (num);
}
