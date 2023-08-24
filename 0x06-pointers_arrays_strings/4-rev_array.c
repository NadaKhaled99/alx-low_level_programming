#include "main.h"
/**
*reverse_array-reverses the content of an array of integers
*@a:ptr to array
*@n:no. of elements of an array
*Return:void
*/
void reverse_array(int *a, int n)
{
int temp;
int ct = 0;
n = n - 1;
while (ct <= n)
{
temp = a[ct];
a[ct++] = a[n];
a[n--] = temp;
}
}
