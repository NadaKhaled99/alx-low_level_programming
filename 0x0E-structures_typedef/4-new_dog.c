#include "dog.h"
#include <stdlib.h>
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
int i;
int g;
n = g = 0;
while (name[n++])
{
;
}
while (owner[g++])
{
;
}
dog = malloc(sizeof(dog_t));
if (dog == NULL)
{
return (NULL);
}
dog->name = malloc(n *sizeof(dog->name));
if (dog == NULL)
{
return (NULL);
}
for (i = 0; i < n; i++)
{
dog->name[i] = name[i];
}
dog->age = age;
dog->owner = malloc(g * sizeof(dog->owner));
if (dog == NULL)
{
return (NULL);
}
for (i = 0; i < g; i++)
{
dog->owner[i] = owner[i];
}
return (dog);
}
