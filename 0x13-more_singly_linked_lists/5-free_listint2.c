#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - frees list
 * @head: struct
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node1 = NULL;
	listint_t *node2 = NULL;

	if (head == NULL)
	{
		return;
	}
	node1 = *head;

	while (node1 != NULL)
	{
		node1 = node2;
		node1 = node1->next;
		free(node2);
	}
	*head = NULL;
}
