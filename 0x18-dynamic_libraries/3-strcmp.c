#include "main.h"
/**
*_strcmp-function compare between 2 strings
*@s1:ptr to 1st string
*@s2:ptr to 2nd string
*Return: value lessthan 0 or greaterthan 0 0r = to 0
*/
int _strcmp(char *s1, char *s2)
{
int ct = 0, comp;
while (s1[ct] == s2[ct] && s1[ct] != '\0')
{
ct++;
}
comp = s1[ct] - s2[ct];
return (comp);
}
