#include <stdio.h>
#include "function_pointers.h"
/**
*print_name-function that prints a name.
*@name:prints a name by using ptr
*@f:ptr to function
*Return:Always 0 (success)
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}
