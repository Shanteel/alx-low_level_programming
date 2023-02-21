#include "main.h"
/**
 * print_alphabet_x10 - A program that prints 10x the lowercase alphabet
 *
 */

void print_print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			_putchar('\n');
			i++;
		}
	}
}
