#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_dlistint - free list
* @head: head of node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next = NULL;

	if (head == NULL)
	{
		return;
	}

	for (; head;)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
