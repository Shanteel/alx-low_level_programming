#include <stdio.h>
/**
 * main - A Program that prints all numbers of a base in LC
 *
 * Return: 0 (sucsess)
 */

int main(void)
{
	char c;

	int d;

	c = 'a';
	d = '0';
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
