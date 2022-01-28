#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: key (cannot be an empty string)
 * @value: value of key (must be duplicated & cannot be empty string)
 * Return: 1 if Success; otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element, *element;

	if (key == NULL || strlen(key) < 1 || !value || !ht)
		return (0);
	new_element = malloc(sizeof(hash_node_t));
	if (!new_element)
		return (0);

	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = NULL;

	 index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_element;
		return (1);
	}
	element = ht->array[index];
	while (element != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			free(element->value);
			element->value = strdup(value);
			free(new_element->value);
			free(new_element->key);
			free(new_element);
			return (1);
		}
		element = element->next;
	}
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);


}
