#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - fuction
 * @head: head to node
 * Return:void
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
