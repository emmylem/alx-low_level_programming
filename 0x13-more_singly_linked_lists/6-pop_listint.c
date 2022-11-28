#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - remove node from top
 *
 * @head: pointer to head node
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	unsigned int index = 0;
	listint_t *node = *head;

	if (node)
	{
		index = node->n;
		*head = node->next;
	}
	free(node);
	return (index);
}
