#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
	n *= -1;
	b = n;
	_putchar('_');
	}
	b /= 10;
	if (b != 0)
	print_number(b);
	_putchar((unsigned int) n % 10 + '0');
}
