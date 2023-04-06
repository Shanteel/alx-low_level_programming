#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: point to the first node
 * @index: inddex of the node from 0
 * Return: pointer to the node found, if not found return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *nodePtr = head;

	while (nodePtr && i < index)
	{
		nodePtr = nodePtr->next;
		i++;
	}

	return (nodePtr ? nodePtr : NULL);
}
