#include "main.h"
#include "putchar.h"
/**
*factorial- function that returns the factorial of a given number
*@n:integer used for printing
*Return: always 0 (success)
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
