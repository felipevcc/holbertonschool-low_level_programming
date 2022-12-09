#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, counter = 0;
	hash_node_t *node = NULL;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			if (counter != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			counter++;
		}
	}
	printf("}\n");
}
