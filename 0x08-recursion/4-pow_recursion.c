#include "main.h"
#include "putchar.h"
/**
*_pow_recursion-function returns the value of x of  power of y
*@x:value
*@y:power
*Return: result of value of x  powered by y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
