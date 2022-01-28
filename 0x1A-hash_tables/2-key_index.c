#include "hash_tables.h"

/**
 * key_index - hashes an index
 *
 * @size: size of the hash table
 * @key: key
 * Return: returns the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
