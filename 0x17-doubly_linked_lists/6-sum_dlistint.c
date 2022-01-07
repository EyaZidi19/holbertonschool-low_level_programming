#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_dlistint - return sum of all the data (n)
* @head: head of node
* Return: sum of all the data (n)
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (; head;)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
