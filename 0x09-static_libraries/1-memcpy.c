#include "main.h"
/**
*_memcpy-entry point
*@dest:Destination
*@src:the size of the memory to print
*@n:n byte of  memory
*Return: ptr to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
