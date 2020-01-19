#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to update
 * @key: the key
 * @value: value associated with key
 * Return: 1 if success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *tmp;

	i = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	if (ht == NULL || key == NULL)
		return (0);

	new->value = strdup(value);
	new->key = strdup(key);
	tmp = ht->array[i];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			ht->array[i]->value = new->value;
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = ht->array[i];
	new->next = tmp;
	ht->array[i] = new;

	return (1);
}
