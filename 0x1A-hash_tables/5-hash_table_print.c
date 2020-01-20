#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");

	for (i = 0; i < (int)ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
