#include "main.h"

/**
 * clear_bit - function that sets tha value of bit to 0
 * @index: start of bit form 0
 * @n: point to a number
 * Return: 1(success), -1(error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = (*n & ~(1UL << index));
	return (1);
}
