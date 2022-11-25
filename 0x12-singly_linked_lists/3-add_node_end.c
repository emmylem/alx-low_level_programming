#include "lists.h"
/**
 * _strlen - adds node
 * @str: pointser to struct pointer
 * Return: liength of string
 */
int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * add_node_end - adds node
 * @head: double pointer
 * @str: pointer to struct pointer
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *end_node;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
	{
		return (NULL);
	}
	else
	{
		list = *head;

		while (list->next)
		{
			list = list->next;
		}
		list->next = end_node;
	}
	return (end_node);
}
