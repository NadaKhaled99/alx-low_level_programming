#include "main.h"
/**
*_strspn-entry point
*@s:the size of the memory to print
*@accept: value or input
*Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int n;
unsigned int verify;
unsigned int input = 0;
for (i = 0; s[i] != '\0'; i++)
{
verify = 0;
for (n = 0; accept[n] != '\0'; n++)
{
if (accept[n] == s[i])
{
input++;
verify = 1;
}
}
if (verify == '\0')
return (i);
}
return (i);
}
