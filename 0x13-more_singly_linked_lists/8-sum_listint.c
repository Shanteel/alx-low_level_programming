#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the nth data
 * @head: points to the first node
 * Return: sum of data, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *nodePtr = head;

	while (nodePtr)
	{
		i += nodePtr->n;
		nodePtr = nodePtr->next;
	}

	return (i);
}
