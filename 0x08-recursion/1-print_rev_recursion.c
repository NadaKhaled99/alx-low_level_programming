#include "main.h"
#include "putchar.h"
/**
*_print_rev_recursion-function that prints a string in reverse,followed by line
*@s:string used for printing
*Return: always 0 (success)
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
