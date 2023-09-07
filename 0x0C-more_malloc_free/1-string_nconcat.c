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
unsigned int j;
unsigned int x = 0;
unsigned int y = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[x] != '\0')
{
x++;
}
y = (x + n) * sizeof(str);
str = malloc(y + 1);
if (str == NULL)
{
return (NULL);
}
i = 0;
while (i < y && s1[i] != '\0')
{
str[i] = s1[i];
i++;
}
j = 0;
while (j < y && s2[j] != '\0')
{
str[i] = s2[j];
i++;
j++;
}
str[i] = '\0';
return (str);
}
