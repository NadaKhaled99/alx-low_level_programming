#include "function_pointers.h"
/**
*int_index-function that searches for an integer
*@array:array of element 
*@size:is the number of elements in the array
*@cmp:ptr to function
*Return:returns the index of the first element
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int j;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (j = 0; j < size; j++)
{
if (cmp(array[j]))
{
return (j);
}
}
return (-1);
}
