#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hast table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL, *aux = NULL;

	if (!ht)
		return;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			aux = node->next;	
			free(node->key);
			free(node->value);
			free(node);
			node = aux;
		}
		i++;
	}

	free(ht->array);
	free(ht);
}
