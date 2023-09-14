#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_strings-function that prints strings, followed by a new line
*@separator:string to be printed
* @n:number of strings
* @...: A variable number of strings to be printed
*Description:If separator is NULL, it is not printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
char *s;
unsigned int j;
va_list g;
va_start(g, n);
for (j = 0; j < n; j++)
{
s = va_arg(g, char *);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
if (j != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(g);
}
