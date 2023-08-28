#include "main.h"
/**
*_memset:fills the 1st n byte of  memory pointed to by s with the byte b
*@b:the address of memory to print
*@s:the size of the memory to print
*Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
s[j] = b;
return (s);
}
