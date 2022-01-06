#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
* @head: head of node
* @n: num to new node
* Return: the point dlistint_t
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);
	aux = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (; aux && aux->next;)
	{
		aux = aux->next;
	}

	aux->next = new_node;
	new_node->prev = aux;

	return (new_node);
}
