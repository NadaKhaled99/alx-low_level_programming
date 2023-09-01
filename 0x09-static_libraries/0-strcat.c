#include "main.h"
/**
*_strcat-function concatenates the two string
*@dest: is a pointer to the dest
*@src: source
*Return:the pointer to dest
*/
char *_strcat(char *dest, char *src)
{
int I = 0;
int J = 0;
while (*(dest + I) != '\0')
{
I++;
}
while (J >= 0)
{
*(dest + I) = *(src + J);
if (*(src + J) == '\0')
break;
I++;
J++;
}
return (dest);
}
