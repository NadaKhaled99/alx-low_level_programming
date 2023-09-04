#include "main.h"
/**
*_strdup-function returns a pointer to a newly allocated space in memory
*@str: string given as a parameter
*Return:NULL if str = NULL
*/
char *_strdup(char *str)
{
int i = 0;
int size = 0;
char *n;
if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
n = malloc(size * sizeof(*str) + 1);
if (n == NULL)
{
return (NULL);
}
for (size = 0; str[size] != '\0'; size++)
{
n[size] = str[size];
}
return (n);
}
