#include <stdlib.h>
#include <stdio.h>
/**
*string_nconcat-concatenates number of bytes of strings with the another
*@s1:is string which appended to
*@s2:string for concatenation
*@n:byte numbers
*Return:ptr to string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i = 0;
unsigned int j = 0;
unsigned int x = 0;
unsigned int y = 0;

while (s1 && s1[x])
{
x++;
}
while (s2 && s2[y])
{
y++;
}
if (n < y)
{
str = malloc(sizeof(char) * (x + n + 1));
}
else
{
str = malloc(sizeof(char) * (x + y + 1));
}
if (!str)
return (NULL);
while (i < x)
{
str[i] = s1[i];
i++;
}
while (n < y && i < (x + n))
{
str[i++] = s2[j++];
}
while (n < y && i < (x + y))
{
str[i++] = s2[j++];
}
str[i] = '\0';
return (str);
}
