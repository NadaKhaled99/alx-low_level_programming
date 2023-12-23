#include "hash_tables.h"
/**
 * hash_table_get-give a value from the hash table
 * @ht:Hash table
 * @key:Key
 * Return: The value if works,else  NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int inx;
	hash_node_t *current;
	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	inx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[inx];
	if (current == NULL)
		return (NULL);
	while (strcmp(current->key, key) && current != NULL)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	else
		return (current->value);
}
