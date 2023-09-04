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
int i = 0;
int s = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
while (s2[s] != '\0')
{
s++;
}
str = malloc(sizeof(char) * (i + s + 1));
if (str == NULL)
{
return (NULL);
}
i = 0;
s = 0;
i = s;
while (s1[i] != '\0')
{
str[i] = s1[i];
i++;
}
while (s2[s] != '\0')
{
str[s] = s2[s];
s++;
i++;
}
str[i] = '\0';
return (str);
}
