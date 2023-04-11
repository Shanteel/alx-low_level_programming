#include "main.h"

/**
 * set_bit - finction that sets the value of bit to 1 at a given index
 * @index: start of bit which is 0
 * @n: pointer to a number
 * Return: 1(success), -1(error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | (1UL << index));
			return (1);
}
