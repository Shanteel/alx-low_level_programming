#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @head: points to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nodePtr;

	if (head == NULL)
		return;

	while (*head)
	{
		nodePtr = (*head)->next;
		free(*head);
		*head = nodePtr;
	}

	*head = NULL;
}
