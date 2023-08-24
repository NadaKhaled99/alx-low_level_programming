#include "main.h"
/**
*_strncat-function returns dest, the pointer to the destination string
*@dest:This is a pointer to the destination array
*@src:the string to be appended-This should not overlap the dest
*@n:number of bytes from src to be appended to dest
*Returns:pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int idx;
int dtlenght = 0;
while (dest[dtlenght] != '\0')
dtlenght++;
for (idx = 0; src[idx] != '\0' && idx < n; idx++)
{
dest[dtlenght++] = src[idx];
}
dest[dtlenght] = '\0';
return (dest);
}
