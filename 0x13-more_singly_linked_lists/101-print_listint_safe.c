#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t
 *
 * @head: listint_t head
 *
 * Return: size_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count1 = 0, count2;
	const listint_t *temp = head;
	const listint_t *node1;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);

		count1++;

		temp = temp->next;
		node1 = head;

		count2 = 0;

		while (count2 < count1)
		{
			if (temp == node1)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count1);
			}

			node1 = node1->next;
			count2++;
		}
	}
	return (count1);
}
