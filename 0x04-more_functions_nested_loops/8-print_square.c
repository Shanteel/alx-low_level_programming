#include "main.h"

/**
 * print_square - prints n squares according to nmunber of times
 * @size: number of squares to be printed a number of times
 * Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
