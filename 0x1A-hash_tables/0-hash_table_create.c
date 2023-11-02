#include "hash_tables.h"

/**
 *hash_table_create - function that creates a hash table
 *@size: size of the array
 *Return: pointer to the hash table
 */

hash_table.h *hash_table_create(unsigned long int size)
{
	hash_table.h *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	        return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
	        return (NULL);
	}
	return (table);
}
