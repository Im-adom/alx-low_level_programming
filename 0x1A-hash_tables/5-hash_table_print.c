#include "hash_tables.h"
/**
 * hash_table_print - this function prints a hash table.
 * @ht: pointer to the value
 * Description: the key- value pair are printed in the order they
 * appear in the array of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int g;
	unsigned char comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (g = 0; g < ht->size; g++)
	{
		if (ht->array[g] != NULL)
		{
			if (comma == 1)
				printf(", ");

			node = ht->array[g];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
