#include "main.h"

/**
 * get_bit - function that returns the value of a given index
 * @index: starts from 0 of the bit we are getting
 * @n: integer
 * Return: value of bit at index, -1 for an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int valOfBIt;

	if (index >= 64)
		return (-1);
	valOfBit = (index << n) & (0x1);

	return (valOfBit);
}
