#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 * @h: A pointer to the head of the dlistint_t list
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 *  Return: If the function fails - NULL.
 *         Otherwise - the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = *h, *new;

	if (!idx)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		node = node->next;
		if (!node)
			return (NULL);
	}

	if (!node->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = node;
	new->next = node->next;
	node->next->prev = new;
	node->next = new;

	return (new);
}
