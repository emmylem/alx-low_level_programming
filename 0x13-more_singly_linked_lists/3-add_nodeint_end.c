#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds node at the end
 * @head: struct
 * @n: const struct
 *
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *end_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (*head);
	}
	end_node = *head;

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}
	end_node->next = new_node;
	new_node->next = NULL;

	return (*head);
}
