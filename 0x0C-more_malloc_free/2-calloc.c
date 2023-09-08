#include <stdlib.h>
#include "main.h"
/**
*_calloc - allocates memory for an array of nmemb elements of bytes size
*@nmemb:number of elements of an array
*@size:size of each element of array
Return:pointer to allocate memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str;
int j = 0;
int a = 0;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
a = nmemb * size;
str = malloc(a);
if (str == NULL)
{
return (NULL);
}
while (j < a)
{
str[j] = 0;
j++;
}
return (str);
}
