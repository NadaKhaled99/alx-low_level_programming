#include "hash_tables.h"
/**
 * hash_table_delete -fn to delete the hash table
 * @ht:Hash table
 * Return:nothing
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int g;
hash_node_t *current;
for (g = 0; g < ht->size; g++)
{
if (ht->array[g] != NULL)
{
while (ht->array[g] != NULL)
{
current = ht->array[g]->next;
free(ht->array[g]->key);
free(ht->array[g]->value);
free(ht->array[g]);
ht->array[g] = current;
}
}
}
free(ht->array);
free(ht);
}
