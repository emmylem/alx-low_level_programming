#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - Sum of all data
 *
 * @head: head of node
 *
 * Return: void
 */
int sum_listint(listint_t *head)
{
	unsigned int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}
	return (sum_data);
}
