#include <stdio.h>
/**
*swap_int-swap the values of integers
*@a: the 1st integer to be swapped
*@b: the 2nd integer to be swapped
*Return:nothing
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
