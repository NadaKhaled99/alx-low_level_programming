#include "dog.h"
#include <stdlib.h>
/**
*init_dog-function that initialize a variable of type
*@d:ptr of struct to initialize
*@name:ptr to the name of struct
*@age:Dog Age
*@owner:name of owner of the dog
*Description:data of dog struct
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
}
d->name = name;
d->age = age;
d->owner = owner;
}
