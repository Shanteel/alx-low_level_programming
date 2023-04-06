#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end
 * @head: points to the first node
 * @n: integer
 * Return: pointer to the new node, NULL if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *temp = *head;

	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (temp->next)
		temp  = temp->next;
	temp->next = end;

		return (end);
}
