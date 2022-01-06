#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* print_dlistint - prints all the elements of a dlistint_t list.
* @h: head of node.
* Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int n_sum = 0;

	if (h == NULL)
		return (0);

	for (; h;)
	{
		printf("%i\n", h->n);
		n_sum++;
		h = h->next;
	}

	return (n_sum);
}
