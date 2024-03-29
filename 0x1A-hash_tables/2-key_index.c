#include "hash_tables.h"
/**
 * key_index - This function gives the index of a key.
 * @key: the key to get index of.
 * @size: size of the array of the hash table.
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
