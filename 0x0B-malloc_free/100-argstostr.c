#include "main.h"
/**
*argstostr-function that concatenates all the arguments of your program
*@av:element
*@ac:element
*Return:a pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int i;
int number;
int result = 0;
int len = 0;
char *str;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (number = 0; av[i][number]; number++)
{
len++;
}
}
len += ac;
str = malloc(sizeof(char) * len + 1);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
for (number = 0; av[i][number]; number++)
{
str[result] = av[i][number];
result++;
}
if (str[result] == '\0')
{
str[result++] = '\n';
}
}
return (str);
}
