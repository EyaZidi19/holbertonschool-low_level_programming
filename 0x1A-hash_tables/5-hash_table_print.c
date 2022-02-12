#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash tables
 * Return: void function with no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0, node = 0;
	hash_node_t *temp;

	if (ht == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		temp = ht->array[a];

		while (temp)
		{
			if (node != 0)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			node++;
		}
	}

	printf("}\n");
}
