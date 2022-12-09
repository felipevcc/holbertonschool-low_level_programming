#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value
 * @key: key
 * @value: value associated with the key
 * Return: 1 or 0 (int)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char *value_dup = NULL, *key_dup = NULL;

	if (!ht || !key || !value)
		return (0);

	key_dup = strdup(key);
	value_dup = strdup(value);

	index = hash_djb2((const unsigned char *)key_dup) % (ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = key_dup;
	node->value = value_dup;
	node->next = NULL;

	if (ht->array[index] && strcmp(ht->array[index]->key, key) != 0)
		node->next = ht->array[index];

	ht->array[index] = node;

	free(node->key);
	free(node->value);
	free(node);
	return (1);
}
