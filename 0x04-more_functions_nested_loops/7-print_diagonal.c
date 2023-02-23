#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: diagonal line to be drawn
 * Return: void
 */

void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 0; c < n; c++)
	{
	for (d = 0; d < n; d++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
