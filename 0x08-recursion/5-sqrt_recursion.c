#include "main.h"
#include "putchar.h"
int real_sqrt_recursion(int n, int i);
/**
*_sqrt_recursion- function returns the natural sqrt root of a number
*@n: integer
*Return: always 0 (success)
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (real_sqrt_recursion(n, 0));
}
/**
*real_sqrt_recursion-function to find natural
*@n:number to calculate sqrt
*@i:iterator
*Return: result sqrt
*/
int real_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (real_sqrt_recursion(n, i + 1));
}
