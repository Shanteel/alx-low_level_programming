#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char*) & n;
	return (*c == 1);
}
