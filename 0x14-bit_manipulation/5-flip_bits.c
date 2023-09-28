#include "main.h"
/**
*flip_bits- returns the number of bits you would
*@n:numper input
*@m:number input
*Return:no. of bit
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int sum = 0;
int z;
unsigned long int c;
unsigned long int d;
d = n ^ m;
for (z = 63; z >= 0; z--)
{
c = d >> z;
if (c & 1)
{
sum++;
}
}
return (sum);
}
