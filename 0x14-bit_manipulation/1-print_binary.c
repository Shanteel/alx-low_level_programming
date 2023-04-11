#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int printed_bits = 0;
	unsigned long int mask;
	int i = 63;

	while (i >= 0)
	{
		i--;
		{
			mask = n >> 1;
			if (mask & 1)
			{
				putchar ('1');
				printed_bits++;
			}
			else if (printed_bits)
				putchar('0');
		}
		if (printed_bits != 0)
			putchar('0');
	}
}
