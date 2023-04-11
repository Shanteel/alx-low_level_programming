#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int i, printed_bits = 0;
	unsigned long int mask;

	for (i = 63; i >= 0; i--)
		{
			mask = i >> 0;
			if (mask & n)
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
