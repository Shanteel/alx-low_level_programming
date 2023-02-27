#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints elements of an array of integers
 * @a: array if integers
 * @n: number of array elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j  != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
