#include "main.h"
/**
*_memset-entry point
*@b:the address of memory to print
*@s:the size of the memory to print
*@n:n byte of  memory
*Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
