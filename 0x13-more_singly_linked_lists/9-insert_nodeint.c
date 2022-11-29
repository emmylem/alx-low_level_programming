#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - add node at the nth index
 *
 * @head: head of ne=ode
 *
 * @idx: index
 *
 * @n: struct int
 *
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *node1;
	listint_t *node2 = malloc(sizeof(listint_t));

	if (head == NULL || node2 == NULL)
	{
		return (NULL);
	}

	node2->n = n;
	node2->next = NULL;

	if (!idx)
	{
		node2->next = *head;
		*head = node2;
		return (node2);
	}

	node1 = *head;

	while (node1)
	{
		if (count == (idx - 1))
		{
			node2->next = node1->next;
			node1->next = node2;
			return (node2);
		}
		count++;
		node1 = node1->next;
	}
	free(node2);

	return (NULL);
}
