#include "hash_tables.h"
/**
 * hash_table_print-print the hash table
 * @ht: Hash table
 * Return:nothing
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int g, flagg = 0;
hash_node_t *current;
if (ht == NULL)
return;
putchar('{');
for (g = 0; g < ht->size; g++)
{
current = ht->array[g];
if (current != NULL)
{
while (current != NULL)
{
if (flagg == 1)
{
printf(", ");
}
printf("'%s': '%s'", current->key, current->value);
flagg = 1;
current = current->next;
}
}
}
putchar('}');
putchar('\n');
}
