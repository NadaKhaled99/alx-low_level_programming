#include "main.h"
#define NULL 0
/**
*_strchr-locates a character in a string
*@s:the size of the memory to print
*@c:character
*Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
