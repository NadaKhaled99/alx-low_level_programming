#include "main.h"
#include "putchar.h"
/**
*_strlen_recursion-function that returns the length of a string
*@s:string used for printing
*Return: always 0 (success)
*/
int _strlen_recursion(char *s)
{
int i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1)
}
return (i);
}
