#include "main.h"

/**
 * flip_bits - function that returns a flipped number of bits to get another
 * @m: integer
 * @n: integer
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num_of_bits = 0;
	unsigned long int mask;
	unsigned long int xor = n ^ m;

	i = 63;
	while (i >= 0)
	{
		i++;
	}
	mask = xor >> i;
	if (mask & 1)
		num_of_bits++;
	return (num_of_bits);
}
