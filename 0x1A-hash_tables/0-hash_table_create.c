#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of a given size
 *
 * @size: size of the hash table
 * Return: returns the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (!table->array)
		return (NULL);

	return (table);
}
