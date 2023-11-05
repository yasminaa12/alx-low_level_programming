#include <string.h>
#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key.
 *@ht: hash table
 *@key: key of the hash table
 *Return: the value associated with the element,
 *or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
