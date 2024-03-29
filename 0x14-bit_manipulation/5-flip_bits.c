#include "main.h"

/**
 * flip_bits - function that returns a flipped number of bits to get another
 * @m: integer
 * @n: integer
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num_of_bits = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		if (xor & 1)
		{
			num_of_bits++;
		}
		xor >>= 1;
	}
	return (num_of_bits);
}
