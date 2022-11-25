#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - cheacks code
 * Return: 0
 */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Anne");
	add_node_end(&head, "Colton");
	add_node_end(&head, "Corbin");
	add_node_end(&head, "Daniel");
	add_node_end(&head, "Danton");
	add_node_end(&head, "David");
	add_node_end(&head, "Gary");
	add_node_end(&head, "Holden");
	add_node_end(&head, "Ian");
	add_node_end(&head, "Ian");
	add_node_end(&head, "Jay");
	add_node_end(&head, "Jennie");
	add_node_end(&head, "Jimmy");
	add_node_end(&head, "Justin");
	add_node_end(&head, "Kalson");
	add_node_end(&head, "Kina");
	add_node_end(&head, "Matthew");
	add_node_end(&head, "Max");
	add_node_end(&head, "Michael");
	add_node_end(&head, "Ntuj");
	add_node(&head, "Philip");
	add_node(&head, "Richard");
	add_node(&head, "Samantha");
	add_node(&head, "Stuart");
	add_node(&head, "Swati");
	add_node(&head, "Timothy");
	add_node(&head, "Victor");
	add_node(&head, "Walton");
	print_list(head);
	return (0);
}
