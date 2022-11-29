#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe - frees a listint list
 *
 * @h: listint_t double pointer
 *
 * Return: size_t
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int count2;
	listint_t *head, *node1;

	if (*h == NULL)
	{
		return (0);
	}

	head = *h;

	while (head)
	{
		count++;
		count2 = head->next - head;
		node1 = head;
		free(node1);

		if (count2 >= 0)
		{
			break;
		}
		head = head->next;
	}
	return (count);
}
