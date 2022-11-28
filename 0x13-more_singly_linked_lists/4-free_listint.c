#include "lists.h"
#include <stdio.h>
/**
 * free_listint - frees listint_t
 * @head:struct
 * Return: listint_t
 */
void free_listint(listint_t *head)
{
	listint_t *free_list;

	while (head)
	{
		free_list = head;
		head = head->next;
		free(free_list);
	}
}
