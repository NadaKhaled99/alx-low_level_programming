#include "main.h"
#include <stdio.h>
/**
*print_diagsums-prints the sum of the 2 diagonals of  matrix of integers
*@a:matrix of integer
*@size:size of matrix
*Return: 0 Always (success)
*/
void print_diagsums(int *a, int size)
{
int idx;
int s1 = 0;
int s2 = 0;
for (idx = 0; idx < size; idx++)
{
s1 += a[idx];
a += size;
}
a -= size;
for (idx = 0; idx < size; idx++)
{
s2 += a[idx];
a -= size;
}
printf("%d, %d\n", s1, s2);
}
