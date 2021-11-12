#include "lists.h"
/**
 * print_list - function of list
 * @h: const list_t
 * Return: i
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}
