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
int idx = 0;
int dtlenght = 0;
while (dest[idx++])
dtlenght++;
for (idx = 0; src[idx] && idx < n; idx++)
dest[dtlenght++] = src[idx];
return (dest);
}
