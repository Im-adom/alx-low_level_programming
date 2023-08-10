#include "hash_tables.h"
/**
 * hash_table_get - This function retrieves a value associated with a key.
 * @ht: pointer to the hash table.
 * @key: key to the value of.
 * Return: NULL if key cannot be matched, else, return the value
 * associated with the ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
