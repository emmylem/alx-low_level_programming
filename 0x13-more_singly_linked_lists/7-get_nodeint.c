#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - Nth node
 *
 * @head: struct pointer to head node
 *
 * @index: int
 *
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
