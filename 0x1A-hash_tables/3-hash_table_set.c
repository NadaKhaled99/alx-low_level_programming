#include "hash_tables.h"

/**
 * free_node - Free a node.
 * @node: Node to free.
 *
 * Return: Void.
 */
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_set - Set a value in the hash table
 * @ht: Hash table
 * @key: Key to be indexed
 * @value: Value to set in the hash table
 * Return: 1 if works, 0 if doesn't
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int inx;
hash_node_t *n_node, *current;
if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
return (0);
inx = key_index((const unsigned char *)key, ht->size);
n_node = malloc(sizeof(hash_node_t));
if (n_node == NULL)
return (0);
n_node->key = strdup((char *)key);
n_node->value = strdup((char *)value);
n_node->next = NULL;
if (ht->array[inx] == NULL)
ht->array[inx] = n_node;
else
{
current = ht->array[inx];
if (strcmp(current->key, key) == 0)
{
n_node->next = current->next;
ht->array[inx] = n_node;
free_node(current);
return (1);
}
while (current->next != NULL && strcmp(current->next->key, key) != 0)
{ current = current->next;
}
if (strcmp(current->key, key) == 0)
{
n_node->next = current->next->next;
free_node(current->next);
current->next = n_node;
}
else
{
n_node->next = ht->array[inx];
ht->array[inx] = n_node;
}
}
return (1);
}
