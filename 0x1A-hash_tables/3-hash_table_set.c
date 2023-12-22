#include "hash_tables.h"
/**
 * Do_hash_node-make a new hash node
 * @key:key of the node
 * @value:of the node
 * Return: the new node, or NULL
 */
hash_node_t *Do_hash_node(const char *key, const char *value)
{
	hash_node_t *nnode;
	nnode = malloc(sizeof(hash_node_t));
	if (nnode == NULL)
		return (NULL);
	nnode->key = strdup(key);
	if (nnode->key == NULL)
	{
		free(nnode);
		return (NULL);
	}
	nnode->value = strdup(value);
	if (nnode->value == NULL)
	{
		free(nnode->key);
		free(nnode);
		return (NULL);
	}
	nnode->next = NULL;
	return (nnode);
}
/**
 * hash_table_set-sets a key to a value in the hash table
 * @ht:hash table
 * @key: key of the data
 * @value: need to store
 * Return: 1 if successful,else return 0 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int inx;
	hash_node_t *hash_node, *temp;
	char *n_value;
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	inx = key_inx((const unsigned char *)key, ht->size);
	temp = ht->array[inx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			n_value = strdup(value);
			if (n_value == NULL)
				return (0);
			free(temp->value);
			temp->value = n_value;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = Do_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[inx];
	ht->array[inx] = hash_node;
	return (1);
}
