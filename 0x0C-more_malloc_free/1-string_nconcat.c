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
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i])
i++;
while (s2[x])
x++;
if (n >= x)
{
y = i + x;
}
else
y = i + n;
str = malloc(sizeof(char) * y + 1);
if (str == NULL)
{
return (NULL);
}
x = 0;
while (j < y)
{
if (j <= i)
{
str[j] = s1[j];
}
if (j >= i)
{
str[j] = s2[x];
x++;
}
j++;
}
str[j] = '\0';
return (str);
}
