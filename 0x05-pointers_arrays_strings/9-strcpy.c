#include "main.h"
/**
*_strcpy-copy string
*@dest:value for destination
*@src:value of the source
*Return:the pointer to destine
*/
char *_strcpy(char *dest, char *src)
{
int y;
for (y = 0; src[y] != '\0'; y++)
{
dest[y] = src[y];
}
dest[y++] = '\0';
return (dest);
}
