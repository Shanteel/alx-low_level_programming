#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: point to the first node
 * Return: head node's data, 0 if list empty
 */

int pop_listint(listint_t **head)
{
	listint_t *nodePtr;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	nodePtr = (*head)->next;
	free(*head);
	*head = nodePtr;

	return (i);
}
