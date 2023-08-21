#include "main.h"
#include <stdio.h>
/**
*prinr_arry-print number of element of array of integers
*@a:array of integers
*@n:number of element of array of integers to be printed
*Return:nothing
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
