#include "main.h"
/**
 * reverse_array - function that reverses the array of integers
 * @a: array to be reversed
 * @n: number of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
