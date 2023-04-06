#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: points to the first node
 * idx: index where the list will be added
 * @n: integer
 * Return: address of the new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *nodePtr = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; nodePtr && i < idx; i++)
	{
	if (i == idx - 1)
	{
		new->next = nodePtr->next;
			nodePtr->next = new;
		return (new);
	}
		nodePtr = nodePtr->next;
}
return (NULL);
}
