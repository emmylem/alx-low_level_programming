#include "lists.h"
#include <stdio.h>
/**
 * list_len - return number
 * @h: points to struct
 * Return: num
 */
size_t list_len(const list_t *h)
{
	unsigned int index = 0;
	const list_t *list;

	list = malloc(sizeof(list_t));

			list = h;

			if (list == NULL)
			{
				return (0);
			}
			while (list != NULL)
			{
				list = list->next;
				index++;
			}
			return (index);
}
