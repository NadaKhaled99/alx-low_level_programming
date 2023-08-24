#include "main.h"
/**
*_strcat-function returns dest, the pointer to the destination string
*@dest:This is a pointer to the destination array
@src: the string to be appended-This should not overlap the dest
Returns:dest
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
int main(void)
{
char s1[100] = "Hello";
char s2[] = "World!";
char *ptr;
ptr = _strcat(s1, s2);
printf(ptr);
return (0);
}
