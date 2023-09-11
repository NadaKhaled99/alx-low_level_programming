#include "dog.h"
#include <stdlib.h>
/**
*_strcpy-copies the string
*@dest:ptr to the new data in which we copy the string
*@src:string to be copied
*Return:ptr to dest
*/
char *_strcpy(char *dest, char *src)
{
int m = 0;
int i;
while (src[m] != '\0')
{
m++;
}
for (i = 0; i < m; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/**
*_strlen-returns the string length
*@s: string
*Return:length of string
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
*new_dog-function that creates a new dog
*@name:ptr to the name of struct
*@age:Dog Age
*@owner:name of owner of the dog
*Return:ptr to buffer of datatype dog or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int n;
int g;
n = _strlen(name);
g = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(sizeof(char) * (n + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (g + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
