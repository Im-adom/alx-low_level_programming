#include "hash_tables.h"
/**
 * hash_table_set - This function adds an element in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: 0 on failure else, return 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_cpy;
	unsigned long int index, a;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (a = index; ht->array[a]; a++)
	{
		if (strcmp(ht->array[a]->key, key) == 0)
		{
			free(ht->array[a]->value);
			ht->array[a]->value = value_cpy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_cpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
