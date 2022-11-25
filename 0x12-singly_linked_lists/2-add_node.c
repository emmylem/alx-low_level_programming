#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds node
 * @head: double pointer
 * @str: pointer to struct pointer
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int index = 0;
	list_t *list;

	list = malloc(sizeof(list_t));

	if (list == NULL)
	{
		return (NULL);
	}

	while (str[index] != '\0')
	{
		index++;
	}
	list->len = index;
	list->str = strdup(str);
	list->next = *head;
	*head = list;
	return (*head);
}
