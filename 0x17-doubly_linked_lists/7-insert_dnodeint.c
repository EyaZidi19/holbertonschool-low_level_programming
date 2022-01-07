#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of node.
 * @idx: index for new node.
 * @n: data to be added to new node.
 * Return: Adress to new node or NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cntr = NULL;
	dlistint_t *dexer = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	if (!(*h))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*(h) = new_node;
		return (new_node);
	}

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (cntr = 0; cntr < idx; cntr++)
		dexer = dexer->next;

	new_node->prev = dexer->prev;
	(dexer->prev)->next = new_node;
	dexer->prev = new_node;
	new_node->next = dexer;
	new_node->n = n;
	return (new_node);
}
