#include "main.h"
/**
*print_binary-prints the binary representation of a number
*@n:input number
*/
void print_binary(unsigned long int n)
{
int sum = 0;
int z;
unsigned long int c;
for (z = 63; z >= 0; z--)
{
c = n >> z;
if (c & 1)
{
_putchar('1');
sum++;
}
else if (sum)
{
_putchar('0');
}
}
if (!sum)
{
_putchar('0');
}
}
