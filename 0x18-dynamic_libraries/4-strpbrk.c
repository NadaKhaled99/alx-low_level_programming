#include "main.h"
#define NULL 0
/**
*_strpbrk-searches a string for any of a set of bytes
*@s:the segment
*@accept: string of bytes
*Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int n;
for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
{
return (s + i);
}
}
}
return (0);
}
