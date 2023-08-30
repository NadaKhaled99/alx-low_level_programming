#include "main.h"
#include "putchar.h"
/**
*_puts_recursion-function that prints a string, followed by line
*@s:string used for printing
*Return: always 0 (success)
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
