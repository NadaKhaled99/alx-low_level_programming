#include "main.h"
#include <stdlib.h>
/**
*free_trial-free a memory/make it empty
*@str:pointer value
*@counter:counter
*/
void free_trial(char **str, int counter)
{
for (counter = 0; counter > 0; )
{
free(str[--counter]);
}
free(str);
}
/**
*getnum-fn to calculate number of letters or words
*@str:string for checking
*Return:number
*/
int getnum(char *str)
{
int number = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (*str == ' ')
{
str++;
}
else
{
for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
{
str++;
}
number++;
}
}
return (number);
}
/**
*strtow-function that splits a string into words
*@str:string/element of array
Rerurn:returns a pointer to an array of strings (words) or NULL
*/
char **strtow(char *str)
{
int wrd = 0, being = 0, count = 0, len = 0;
char **w, *find;
if (str == 0 || *str == 0)
return (NULL);
wrd = getnum(str);
if (wrd == 0)
{
return (NULL);
}
w = malloc((wrd + 1) * sizeof(char *));
if (w == 0)
return (NULL);
for (; *str != '\0' && being < wrd;)
{
if (*str == ' ')
str++;
else
{
find = str;
for (; *str != ' ' && *str != '\0';)
{
len++, str++;
}
w[being] = malloc((len + 1) * sizeof(char));
if (w[being] == 0)
{
free_trial(w, being);
return (NULL);
}
while (*find != ' ' && *find != '\0')
{
w[being][count] = *find;
find++, count++;
}
w[being][count] = '\0';
being++, str++;
count = 0, len = 0;
}
}
return (w);
}
