#include "main.h"
#include <stdio.h>
/**
*_strlen-return lenght of string
*@s:stringtoknowthelenghtof
*Return:length of @s
*/
int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}
