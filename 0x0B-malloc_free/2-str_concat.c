#include "main.h"
/**
*str_concat-function that concatenates two strings
*@s1:string 1
*@s2:string 2
*Return:NULL onfailure
*/
char *str_concat(char *s1, char *s2)
{
char *str;
int idx;
int cc = 0;
int L = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (idx = 0; s1[idx] || s2[idx]; idx++)
{
L++;
}
str = malloc(sizeof(char) * L);
if (str == NULL)
{
return (NULL);
}
for (idx = 0; s1[idx]; idx++)
{
str[cc++] = s1[idx];
}
for (idx = 0; s2[idx]; idx++)
{
str[cc++] = s2[idx];
}
return (str);
}
