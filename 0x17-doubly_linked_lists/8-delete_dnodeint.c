#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* delete_dnodeint_at_index - delete a node in index
* @head: head of node
* @index: index
* Return: int
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head, *prev = NULL;

	if (head == NULL)
		return (-1);
	for (i = 0; 1 == 1; i++)
	{
		if (i == index && current)
		{
			if (current->next && prev)
			{
				prev->next = current->next;
				current->next->prev = prev;
			}
			else if (prev)
				prev->next = NULL;
			else if (current->next)
			{
				current->next->prev = NULL;
				*head = current->next;
			}
			else
			{
				*head = current->next;
			}
			free(current);
			return (1);
		}
		if (current)
		{
			prev = current;
			current = current->next;
		}
		else
			break;
	}

	return (-1);
}
