#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (n)
	{
		i++;
		n = n->next;
	}
	return (i);
}
