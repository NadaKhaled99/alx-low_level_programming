#include "main.h"
/**
*binary_to_uint-converts a binary number to an unsigned int
*@b: is pointing to a string of 0 and 1 chars
*Return:the converted number, or 0 if b is NULL
*there is one or more chars in the string b that is not 0/ 1
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int dvalue = 0;
int z = 0;
if (!b)
{
return (0);
}
for (z = 0; b[z]; z++)
{
if (b[z] < '0' || b[z] > '1')
{
return (0);
}
dvalue = 2 * dvalue + (b[z] - '0');
}
return (dvalue);
}
