#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - reverses listint_t in link list
 *
 * @head: head of linked lists
 *
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *node1 = NULL;

	if (head == NULL)
	{
		return (NULL);
	}

	current = *head;
	*head = NULL;

	while (current != NULL)
	{
		node1 = current->next;

		current->next = *head;
		*head = current;
		current = node1;
	}

	return (*head);
}
