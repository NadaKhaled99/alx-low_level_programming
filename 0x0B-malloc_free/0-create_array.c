#include "main.h"
/**
*create_array-function creates an array of chars,initializes with specific char
*@size:size of array of chars
*@c: string like input
*Return:NULL if size = 0 or  a pointer to the array if size = 1
*/
char *create_array(unsigned int size, char c)
{
char *L;
L = malloc(sizeof(char) * size);
if (size == 0 || L == 0)
{
return (0);
}
while (size--)
{
L[size] = c;
}
return (L);
}
