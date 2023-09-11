#ifndef DOG_H
#define DOG_H
/**
*struct dog - dog's information
*@name:1st member
*@age:2nd member
*@owner:3rd member
*Description:define data about the dog data
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
