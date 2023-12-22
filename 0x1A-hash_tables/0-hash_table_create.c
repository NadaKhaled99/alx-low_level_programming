#include "hash_tables.h"
/**
*hash_table_create-make a hash table.
*@size: the size/number of nodes
*Return:ptr to the new created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned int g = 0;
hash_table_t *ht = malloc(sizeof(hash_table_t));
if (ht == NULL)
{
fprintf(stderr, "Error: the malloc is failed\n");
return (NULL);
}
ht->size = size;
ht->array = malloc(sizeof(hash_node_t *) * size);
if (ht->array == NULL)
{
fprintf(stderr, "Error: the malloc is failed\n");
return (NULL);
}
for (; g < size; g++)
ht->array[g] = NULL;
return (ht);
}
