#include "main.h"
/**
*_strcat-function returns dest, the pointer to the destination string
*@dest:This is a pointer to the destination array
*@src: the string to be appended-This should not overlap the dest
*@n:maxi number of bytes to cp from scr
*Return:pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int idx = 0;
for (idx = 0; scr[idx] && idx < n; idx++)
dest[idx] = scr[idx];
while (idx < n)
dest[idx++] = '\0';
return (dest);
}
