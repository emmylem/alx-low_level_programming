#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete node a nth index
 *
 * @head: head of node
 *
 * @index: index
 *
 * Return:1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node1 = *head;
	listint_t *node2;
	unsigned int count;

	if (*head == 0)
	{
		*head = node1->next;
		free(node1);
		return (1);
	}

	for (count = 0; node1 != NULL && count < index - 1; count++)
	{
		node1 = node1->next;
	}
	if (node1 == NULL || node1->next == NULL)
	{
		return (-1);
	}
	node2 = node1->next->next;
	free(node1->next);

	node1->next = node2;
	return (-1);
}
