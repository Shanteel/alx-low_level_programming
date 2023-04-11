#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int current = 255;
	unsigned int n = 1;
	unsigned int num = n & current;

	if (num == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
