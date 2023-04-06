#include "lists.h"

/**
 * delete_nodeint_at_index - fucntion that deletes the node at index
 * @head: points to the first node
 * @index: index of the node to be deleted
 * Return: 1(success), -1(fali)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nodeP = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(nodeP);
		return (1);
	}
	while (a < index - 1)
	{
		if (!nodeP || (!nodeP->next))
			return (-1);
		nodeP = nodeP->next;
		a++;
	}
	current = nodeP->next;
	nodeP->next = current->next;
	free(current);

	return (1);
}
