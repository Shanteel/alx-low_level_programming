#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the first node
 * @n: integer
 * Return: address of the new node, or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (!add)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
