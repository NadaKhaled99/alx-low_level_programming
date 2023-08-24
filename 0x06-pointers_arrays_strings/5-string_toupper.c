#include "main.h"
/**
*string_toupper- change lowercases to uppercases letters
*@w: ptr to string
*Return: ptr to upercase string
*/
char *string_toupper(char *w)
{
int ls = 0;
while (w[ls] != '\0')
{
if (w[ls] >= 97 && w[ls] <= 122)
{
w[ls] = w[ls] - 32;
}
ls++;
}
return (w);
}
