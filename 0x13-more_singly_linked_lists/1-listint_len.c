#include "lists.h"

/**
 * listint_len - Function that returns the number of elements
 * @h: pointer to the node
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
